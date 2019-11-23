// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "VehicleCamerasGameMode.h"
#include "VehicleCamerasPawn.h"
#include "VehicleCamerasHud.h"

AVehicleCamerasGameMode::AVehicleCamerasGameMode()
{
	DefaultPawnClass = AVehicleCamerasPawn::StaticClass();
	HUDClass = AVehicleCamerasHud::StaticClass();
}
