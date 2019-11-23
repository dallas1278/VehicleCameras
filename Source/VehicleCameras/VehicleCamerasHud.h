// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
#pragma once
#include "GameFramework/HUD.h"
#include "VehicleCamerasHud.generated.h"


UCLASS(config = Game)
class AVehicleCamerasHud : public AHUD
{
	GENERATED_BODY()

public:
	AVehicleCamerasHud();

	/** Font used to render the vehicle info */
	UPROPERTY()
	UFont* HUDFont;

	// Begin AHUD interface
	virtual void DrawHUD() override;
	// End AHUD interface
};
