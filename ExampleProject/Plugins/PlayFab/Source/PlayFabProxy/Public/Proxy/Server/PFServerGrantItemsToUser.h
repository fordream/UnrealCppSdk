// This is automatically generated by PlayFab SDKGenerator. DO NOT modify this manually!
#pragma once
#include "OnlineBlueprintCallProxyBase.h"

#include "Core/PlayFabServerAPI.h"
#include "Core/PlayFabServerDataModels.h"
#include "Proxy/PlayFabServerBPDataModels.h"
#include "PFServerGrantItemsToUser.generated.h"

UCLASS()
class PLAYFABPROXY_API UPFServerGrantItemsToUser : public UOnlineBlueprintCallProxyBase
{
	GENERATED_UCLASS_BODY()
public:

	UPROPERTY(BlueprintAssignable)
	FBPServerGrantItemsToUserResultDelegate OnSuccess;

	UPROPERTY(BlueprintAssignable)
	FBPServerGrantItemsToUserResultDelegate OnFailure;
	
	// Adds the specified items to the specified user's inventory
	UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true", WorldContext = "WorldContextObject"), Category = "PlayFab|Server|Player Item Management")
	static UPFServerGrantItemsToUser* GrantItemsToUser(UObject* WorldContextObject, class APlayerController* PlayerController, const FString& InCatalogVersion, const FString& InPlayFabId, const FString& InAnnotation, const TArray<FString>& InItemIds);

	// UOnlineBlueprintCallProxyBase interface
	virtual void Activate() override;
	// End of UOnlineBlueprintCallProxyBase interface

private:

	PlayFab::ServerModels::FGrantItemsToUserRequest Request;

	PlayFab::UPlayFabServerAPI::FGrantItemsToUserDelegate	SuccessDelegate;
	PlayFab::FPlayFabErrorDelegate							ErrorDelegate;

	void OnSuccessCallback(const PlayFab::ServerModels::FGrantItemsToUserResult& Result);
	void OnErrorCallback(const PlayFab::FPlayFabError& Error);
};