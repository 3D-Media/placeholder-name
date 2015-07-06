// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

#include "Client.h"
#include "ClientGameMode.h"
#include "ClientHUD.h"
#include "ClientCharacter.h"

AClientGameMode::AClientGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AClientHUD::StaticClass();
}
