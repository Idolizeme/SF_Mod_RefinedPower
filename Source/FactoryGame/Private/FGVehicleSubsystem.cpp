// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGVehicleSubsystem.h"

AFGVehicleSubsystem::AFGVehicleSubsystem() : Super() {
	this->mMaxVehicleIterationsPerTick = 10;
	this->PrimaryActorTick.TickGroup = TG_PrePhysics; this->PrimaryActorTick.EndTickGroup = TG_PrePhysics; this->PrimaryActorTick.bTickEvenWhenPaused = false; this->PrimaryActorTick.bCanEverTick = true; this->PrimaryActorTick.bStartWithTickEnabled = true; this->PrimaryActorTick.bAllowTickOnDedicatedServer = true; this->PrimaryActorTick.TickInterval = 0;
	this->bAlwaysRelevant = true;
	this->bReplicates = true;
}
void AFGVehicleSubsystem::Tick(float dt){ }
AFGVehicleSubsystem* AFGVehicleSubsystem::Get(UWorld* world){ return nullptr; }
AFGVehicleSubsystem* AFGVehicleSubsystem::Get(UObject* worldContext){ return nullptr; }
void AFGVehicleSubsystem::TickVehicleSimulation(float dt){ }
float AFGVehicleSubsystem::FindClosestPlayerSq( AActor* actor) const{ return float(); }
void AFGVehicleSubsystem::AddVehicle( AFGVehicle* vehicle){ }
void AFGVehicleSubsystem::RemoveVehicle( AFGVehicle* vehicle){ }