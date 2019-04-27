// Developed by Gavin George


#include "GG_RTS_Camera.h"

AGG_RTS_Camera::AGG_RTS_Camera()
{
	PrimaryActorTick.bCanEverTick = true;

	RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));

	cameraSpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraSpringArm"));
	cameraSpringArm->SetupAttachment(RootComponent);
	cameraSpringArm->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, 50.0f), FRotator(-60.0f, 0.0f, 0.0f));
	cameraSpringArm->TargetArmLength = 500.f;
	cameraSpringArm->bEnableCameraLag = true;
	cameraSpringArm->CameraLagSpeed = 10.0f;

	mainCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("RTSCamera"));
	mainCamera->SetupAttachment(cameraSpringArm, USpringArmComponent::SocketName);

	AutoPossessPlayer = EAutoReceiveInput::Player0;
	AIControllerClass = AGG_RTS_PlayerController::StaticClass();

	isRotating = false;

	viewportMargin = 20;
	maxArmLength = 4000.0f;
	minArmLength = -3000.0f;
	maxPitch = -20.0f;
	minPitch = -80.0f;
	zoomSensitivity = 500.0f;
	moveSensitivity = 5000.0f;
}

void AGG_RTS_Camera::BeginPlay()
{
	Super::BeginPlay();
	
	playerControllerPtr = Cast<AGG_RTS_PlayerController>(GetController());
	playerControllerPtr->GetViewportSize(viewportWidth, viewportHeight);
}

void AGG_RTS_Camera::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	float mouseX, mouseY;
	playerControllerPtr->GetMousePosition(mouseX, mouseY);

	if (isRotating)
	{
		playerControllerPtr->GetInputMouseDelta(pitchAndYaw.X, pitchAndYaw.Y);
		pitchAndYaw *= -1.0f;

		FRotator yawRotation = GetActorRotation();
		yawRotation.Yaw += pitchAndYaw.X;
		SetActorRotation(yawRotation);

		FRotator pitchRotation = cameraSpringArm->GetComponentRotation();
		pitchRotation.Pitch = FMath::Clamp(pitchRotation.Pitch + pitchAndYaw.Y, minPitch, maxPitch);
		cameraSpringArm->SetWorldRotation(pitchRotation);
	}

	if (mouseX <= viewportMargin)
		MoveRight(-1.0f);
	if (mouseY <= viewportMargin)
		MoveForward(1.0f);
	if(mouseX >= viewportWidth - viewportMargin)
		MoveRight(1.0f);
	if(mouseY >= viewportHeight - viewportMargin)
		MoveForward(-1.0f);

	if (!movementInput.IsZero())
	{
		movementInput = movementInput.GetSafeNormal() * moveSensitivity;
		FVector newLocation = GetActorLocation();
		newLocation += GetActorForwardVector() * movementInput.X * DeltaTime;
		newLocation += GetActorRightVector() * movementInput.Y * DeltaTime;
		SetActorLocation(newLocation);
	}
}

void AGG_RTS_Camera::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	InputComponent->BindAxis("MoveForward", this, &AGG_RTS_Camera::MoveForward);
	InputComponent->BindAxis("MoveRight", this, &AGG_RTS_Camera::MoveRight);
	InputComponent->BindAction("ZoomIn", IE_Pressed, this, &AGG_RTS_Camera::ZoomIn);
	InputComponent->BindAction("ZoomOut", IE_Pressed, this, &AGG_RTS_Camera::ZoomOut);
	InputComponent->BindAction("PitchAndYaw", IE_Pressed, this, &AGG_RTS_Camera::PitchAndYaw);
	InputComponent->BindAction("PitchAndYaw", IE_Released, this, &AGG_RTS_Camera::EndRotation);
}

void AGG_RTS_Camera::MoveForward(float axisValue)
{
	movementInput.X = FMath::Clamp<float>(axisValue, -1.0f, 1.0f);
}

void AGG_RTS_Camera::MoveRight(float axisValue)
{
	movementInput.Y = FMath::Clamp<float>(axisValue, -1.0f, 1.0f);
}

void AGG_RTS_Camera::ZoomIn()
{
	if (cameraSpringArm->TargetArmLength > minArmLength)
		cameraSpringArm->TargetArmLength -= zoomSensitivity;
}

void AGG_RTS_Camera::ZoomOut()
{
	if (cameraSpringArm->TargetArmLength < maxArmLength)
		cameraSpringArm->TargetArmLength += zoomSensitivity;
}

void AGG_RTS_Camera::PitchAndYaw()
{
	isRotating = true;
}

void AGG_RTS_Camera::EndRotation()
{
	isRotating = false;
}