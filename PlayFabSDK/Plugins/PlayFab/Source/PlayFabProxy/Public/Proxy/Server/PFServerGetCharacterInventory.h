// This is automatically generated by PlayFab SDKGenerator. DO NOT modify this manually!
#pragma once
#include "OnlineBlueprintCallProxyBase.h"

#include "Core/PlayFabServerAPI.h"
#include "Core/PlayFabServerDataModels.h"
#include "Proxy/PlayFabServerBPDataModels.h"
#include "PFServerGetCharacterInventory.generated.h"

UCLASS()
class PLAYFABPROXY_API UPFServerGetCharacterInventory : public UOnlineBlueprintCallProxyBase
{
	GENERATED_UCLASS_BODY()
public:

	UPROPERTY(BlueprintAssignable)
	FBPServerGetCharacterInventoryResultDelegate OnSuccess;

	UPROPERTY(BlueprintAssignable)
	FBPServerGetCharacterInventoryResultDelegate OnFailure;
	
	// Retrieves the specified character's current inventory of virtual goods
	UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true", WorldContext = "WorldContextObject"), Category = "PlayFab|Server|Player Item Management")
	static UPFServerGetCharacterInventory* GetCharacterInventory(UObject* WorldContextObject, class APlayerController* PlayerController, const FString& InPlayFabId, const FString& InCharacterId, const FString& InCatalogVersion);

	// UOnlineBlueprintCallProxyBase interface
	virtual void Activate() override;
	// End of UOnlineBlueprintCallProxyBase interface

private:

	PlayFab::ServerModels::FGetCharacterInventoryRequest Request;

	PlayFab::UPlayFabServerAPI::FGetCharacterInventoryDelegate	SuccessDelegate;
	PlayFab::FPlayFabErrorDelegate							ErrorDelegate;

	void OnSuccessCallback(const PlayFab::ServerModels::FGetCharacterInventoryResult& Result);
	void OnErrorCallback(const PlayFab::FPlayFabError& Error);
};
