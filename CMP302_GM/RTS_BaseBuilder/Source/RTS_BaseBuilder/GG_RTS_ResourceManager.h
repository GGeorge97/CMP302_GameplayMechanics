// Developed by Gavin George

#pragma once

#include "CoreMinimal.h"

/**
 * 
 */
class RTS_BASEBUILDER_API GG_RTS_ResourceManager
{
public:
	GG_RTS_ResourceManager();
	~GG_RTS_ResourceManager();

	inline int32 GetWood() { return wood; };
	inline void SetWood(int32 setVal) { wood = setVal; };
	inline void AddWood(int32 addVal) { wood += addVal; };

	inline int32 GetStone() { return stone; };
	inline void SetStone(int32 setVal) { stone = setVal; };
	inline void AddStone(int32 addVal) { stone += addVal; };

private:
	int32 wood;
	int32 stone;
};
