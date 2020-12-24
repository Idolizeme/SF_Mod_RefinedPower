// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGVehicle.h"
#include "FGHealthComponent.h"
#include "Components/SkeletalMeshComponent.h"

FVehicleSeat::FVehicleSeat(){ }
void AFGVehicle::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const{ }
bool AFGVehicle::IsRelevancyOwnerFor(const AActor* Actor, const AActor* Owner, const AActor* ConnectionActor) const{ return bool(); }
AFGVehicle::AFGVehicle() : Super() {
	this->mMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("VehicleMesh"));
	this->mHealthComponent = CreateDefaultSubobject<UFGHealthComponent>(TEXT("HealthComponent"));
	this->mDisabledByWaterLocations.SetNum(1); this->mDisabledByWaterLocations[0].X = 0; this->mDisabledByWaterLocations[0].Y = 0; this->mDisabledByWaterLocations[0].Z = 0;
	this->mPrimaryColor.R = -1; this->mPrimaryColor.G = -1; this->mPrimaryColor.B = -1; this->mPrimaryColor.A = 1;
	this->mSecondaryColor.R = -1; this->mSecondaryColor.G = -1; this->mSecondaryColor.B = -1; this->mSecondaryColor.A = 1;
	this->mSubmergedAngularDamping = 6;
	this->mSubmergedLinearDamping = 15;
	this->mSubmergedBouyantForce = 1000;
	this->mJumpPadForceMultiplier = 1;
	this->mSignificanceRange = 20000;
	this->mSimulationDistance = 20000;
	this->mShouldAttachDriver = true;
}
void AFGVehicle::BeginPlay(){ }
void AFGVehicle::EndPlay(const EEndPlayReason::Type EndPlayReason){ }
void AFGVehicle::Destroyed(){ }
void AFGVehicle::Tick(float dt){ }
float AFGVehicle::TakeDamage(float DamageAmount,  FDamageEvent const& DamageEvent,  AController* EventInstigator, AActor* DamageCauser){ return float(); }
void AFGVehicle::DisplayDebug( UCanvas* canvas, const FDebugDisplayInfo& debugDisplay, float& YL, float& YPos){ }
UPawnMovementComponent* AFGVehicle::GetMovementComponent() const{ return nullptr; }
void AFGVehicle::Serialize(FArchive& ar){ Super::Serialize(ar); }
void AFGVehicle::PreSaveGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void AFGVehicle::PostLoadGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void AFGVehicle::GainedSignificance_Implementation(){ }
void AFGVehicle::LostSignificance_Implementation(){ }
float AFGVehicle::GetSignificanceBias(){ return float(); }
float AFGVehicle::GetSignificanceRange(){ return float(); }
FLinearColor AFGVehicle::GetPrimaryColor_Implementation(){ return FLinearColor(); }
FLinearColor AFGVehicle::GetSecondaryColor_Implementation(){ return FLinearColor(); }
void AFGVehicle::StartIsAimedAtForColor_Implementation( AFGCharacterPlayer* byCharacter){ }
void AFGVehicle::StopIsAimedAtForColor_Implementation( AFGCharacterPlayer* byCharacter){ }
bool AFGVehicle::CanDock_Implementation(EDockStationType atStation) const{ return bool(); }
UFGInventoryComponent* AFGVehicle::GetDockInventory_Implementation() const{ return nullptr; }
UFGInventoryComponent* AFGVehicle::GetDockFuelInventory_Implementation() const{ return nullptr; }
void AFGVehicle::WasDocked_Implementation( AFGBuildableDockingStation* atStation){ }
void AFGVehicle::WasUndocked_Implementation(){ }
void AFGVehicle::OnBeginLoadVehicle_Implementation(){ }
void AFGVehicle::OnBeginUnloadVehicle_Implementation(){ }
void AFGVehicle::OnTransferComplete_Implementation(){ }
void AFGVehicle::UpdateUseState_Implementation( AFGCharacterPlayer* byCharacter, const FVector& atLocation,  UPrimitiveComponent* componentHit, FUseState& out_useState) const{ }
void AFGVehicle::OnUse_Implementation( AFGCharacterPlayer* byCharacter, const FUseState& state){ }
void AFGVehicle::OnUseStop_Implementation( AFGCharacterPlayer* byCharacter, const FUseState& state){ }
bool AFGVehicle::IsUseable_Implementation() const{ return bool(); }
void AFGVehicle::StartIsLookedAt_Implementation( AFGCharacterPlayer* byCharacter, const FUseState& state){ }
void AFGVehicle::StopIsLookedAt_Implementation( AFGCharacterPlayer* byCharacter, const FUseState& state){ }
FText AFGVehicle::GetLookAtDecription_Implementation( AFGCharacterPlayer* byCharacter, const FUseState& state) const{ return FText(); }
bool AFGVehicle::CanDismantle_Implementation() const{ return bool(); }
void AFGVehicle::GetDismantleRefund_Implementation(TArray< FInventoryStack >& out_refund) const{ }
FVector AFGVehicle::GetRefundSpawnLocationAndArea_Implementation(const FVector& aimHitLocation, float& out_radius) const{ return FVector(); }
void AFGVehicle::PreUpgrade_Implementation(){ }
void AFGVehicle::Upgrade_Implementation(AActor* newActor){ }
void AFGVehicle::Dismantle_Implementation(){ }
void AFGVehicle::StartIsLookedAtForDismantle_Implementation(AFGCharacterPlayer* byCharacter){ }
void AFGVehicle::StopIsLookedAtForDismantle_Implementation(AFGCharacterPlayer* byCharacter){ }
void AFGVehicle::RegisterIncomingAttacker_Implementation( AFGEnemyController* forController){ }
void AFGVehicle::UnregisterAttacker_Implementation( AFGEnemyController* forController){ }
AActor* AFGVehicle::GetActor_Implementation(){ return nullptr; }
float AFGVehicle::GetEnemyTargetDesirability_Implementation( AFGEnemyController* forController){ return float(); }
bool AFGVehicle::ShouldAutoregisterAsTargetable_Implementation() const{ return bool(); }
UPrimitiveComponent* AFGVehicle::GetTargetComponent_Implementation(){ return nullptr; }
bool AFGVehicle::IsAlive_Implementation() const{ return bool(); }
FVector AFGVehicle::GetAttackLocation_Implementation() const{ return FVector(); }
USkeletalMeshComponent* AFGVehicle::GetMesh() const{ return nullptr; }
UFGHealthComponent* AFGVehicle::GetHealthComponent(){ return nullptr; }
bool AFGVehicle::DriverEnter( AFGCharacterPlayer* driver){ return bool(); }
bool AFGVehicle::DriverLeave(bool keepDriving){ return bool(); }
bool AFGVehicle::CanSelfDriverEnter( AAIController* ai) const{ return bool(); }
bool AFGVehicle::SelfDriverEnter( AAIController* ai){ return bool(); }
void AFGVehicle::KickAllPlayers(){ }
void AFGVehicle::Stat_Cost(TArray< FItemAmount >& out_amount) const{ }
void AFGVehicle::Stat_StockInventory(TArray< FItemAmount >& out_amount) const{ }
void AFGVehicle::SetSimulation(bool newIsSimulating){ }
void AFGVehicle::OnRep_IsSimulated(){ }
void AFGVehicle::OnTakeDamage(AActor* damagedActor, float damageAmount, const  UDamageType* damageType,  AController* instigatedBy, AActor* damageCauser){ }
void AFGVehicle::Died(AActor* thisActor){ }
void AFGVehicle::OnDrivingStatusChanged(){ }
void AFGVehicle::UpdateSubmergedInWater(float deltaTime){ }
void AFGVehicle::SubmergedInWaterUpdated(bool newIsSubmerged){ }
bool AFGVehicle::IsSubmergedInWater() const{ return bool(); }
void AFGVehicle::GetDismantleRefundReturns(TArray< FInventoryStack >& out_returns) const{ }
void AFGVehicle::GetDismantleInventoryReturns(TArray< FInventoryStack >& out_returns) const{ }
void AFGVehicle::DestroyVehicle(){ }
void AFGVehicle::ShowOutline(EOutlineColor color) const{ }
void AFGVehicle::HideOutline(){ }
void AFGVehicle::SetSelfDriving(bool newSelfDriving){ }
void AFGVehicle::UpdatePhysicsVolume(APhysicsVolume* physicsVolume){ }
FName AFGVehicle::VehicleMeshComponentName = FName();