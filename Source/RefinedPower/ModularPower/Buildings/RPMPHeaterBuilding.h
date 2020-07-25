// ILikeBanas

#pragma once

#include "CoreMinimal.h"
#include "ModularPower/RPMPBuilding.h"
#include "FGItemDescriptor.h"
#include "FGInventoryComponent.h"
#include "FGFactoryConnectionComponent.h"
#include "FGPipeConnectionComponent.h"
#include "RPMPHeaterBuilding.generated.h"

/**
 * 
 */
UCLASS()
class REFINEDPOWER_API ARPMPHeaterBuilding : public ARPMPBuilding
{
    GENERATED_BODY()

public:

    ARPMPHeaterBuilding();

    virtual void BeginPlay() override;
    virtual void Factory_Tick(float dt) override;
    virtual void Tick(float dt) override;

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    // Functions See DRAW.IO heater tab for diagram!

    void CacheConnections();

    /* Collect & Store Items*/
    void CollectItems(float dt);

    /* CanStartItemBurn (checks amount of heat & co2 in inventory) */
    bool CanStartItemBurn();

    /* StartItemBurn (Copy item energy value to mCurrentEnergyValue & mMaxEnergyValue) */
    void BurnItem(float dt);

    /* ProduceCo2 if needed and store in inventory */
    void ProduceCo2();

    void OutputCo2(float dt);


    /*Util Functions*/

    int getFuelItemCount();

    int getCo2ItemCount();

    /**********************/

    /*Getters & setters*/

    /*returns the current heat of this heater*/
    int getCurrentHeatValue() { return this->mCurrentHeatValue; }

    /*adds to the current heat of this heater - used in the heater itself*/
    void addHeat(float heat)
    {
        this->mCurrentHeatValue += heat;
        mCurrentHeatValue = FMath::Clamp(mCurrentHeatValue, 0.0f, mMaxHeatValue);
    }

    /*subtracts from the current heat of this heater - used in the connected boiler*/
    void subtractHeat(float heat)
    {
        mCurrentHeatValue -= heat;
        mCurrentHeatValue = FMath::Clamp(mCurrentHeatValue, 0.0f, mMaxHeatValue);
    }

    /**********************/

    // Variables

    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "RefinedPower")
    TArray<TSubclassOf<UFGItemDescriptor>> mAllowedFuelItems;

    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "RefinedPower")
    TSubclassOf<UFGItemDescriptor> mCo2ItemClass;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, SaveGame, Replicated, Category = "RefinedPower")
    float mCurrentHeatValue = 0;

    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "RefinedPower")
    float mMaxHeatValue = 500; /*place holder value (needs balancing) - based on melting point of copper in Kelvin*/

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, SaveGame, Replicated, Category = "RefinedPower")
    float mCurrentEnergyValue;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, SaveGame, Replicated, Category = "RefinedPower")
    float mMaxEnergyValue;

    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, SaveGame, Replicated, Category = "RefinedPower")
    float mEnergyValueMultiplier = 1.0f;

    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "RefinedPower")
    bool mProducesCo2 = true;

    /* Amount of Co2 to generate per tick */
    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "RefinedPower")
    int mCo2GenerationAmount = 5;


    UFGFactoryConnectionComponent* InputFuelConveyor;
    UFGPipeConnectionComponent* InputFuelPipe;
    UFGPipeConnectionComponent* OutputCo2Pipe;


    int mFuelInvIndex = 0;
    int mCo2InvIndex = 1;
};
