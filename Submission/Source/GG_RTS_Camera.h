// Developed by Gavin George

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "GameFramework/SpringArmComponent.h"
#include "GameFramework/PlayerController.h"
#include "Camera/CameraComponent.h"
#include "GG_RTS_HUD.h"
#include "GG_RTS_PlayerController.h"
#include "GG_RTS_Camera.generated.h"

UCLASS()
class RTS_BASEBUILDER_API AGG_RTS_Camera : public APawn
{
	GENERATED_BODY()

public:
	AGG_RTS_Camera();

	virtual void Tick(float DeltaTime) override;
	virtual void SetupPlayerInputComponent(class UInputComponent* InputComponent) override;

protected:
	virtual void BeginPlay() override;

private:
	UFUNCTION()
	void MoveForward(float axisValue);
	UFUNCTION()
	void MoveRight(float axisValue);
	UFUNCTION()
	void ZoomIn();
	UFUNCTION()
	void ZoomOut();
	UFUNCTION()
	void PitchAndYaw();
	UFUNCTION()
	void EndRotation();

	UPROPERTY()
	AGG_RTS_PlayerController* playerControllerPtr;

	UPROPERTY(EditAnywhere)
	class USpringArmComponent* cameraSpringArm;
	UPROPERTY(EditAnywhere)
	class UCameraComponent* mainCamera;

	FVector2D movementInput;
	FVector2D pitchAndYaw;

	UPROPERTY()
	int32 viewportWidth;
	UPROPERTY()
	int32 viewportHeight;
	UPROPERTY()
	int32 viewportMargin;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"), Category = CameraSettings)
	float maxArmLength;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"), Category = CameraSettings)
	float minArmLength;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"), Category = CameraSettings)
	float maxPitch;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"), Category = CameraSettings)
	float minPitch;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"), Category = CameraSettings)
	float zoomSensitivity;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"), Category = CameraSettings)
	float moveSensitivity;

	bool isRotating;
};
