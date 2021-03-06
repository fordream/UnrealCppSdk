// This is automatically generated by PlayFab SDKGenerator. DO NOT modify this manually!
#pragma once
#include "OnlineBlueprintCallProxyBase.h"

#include "Core/PlayFabClientAPI.h"
#include "Core/PlayFabClientDataModels.h"
#include "Proxy/PlayFabClientBPDataModels.h"
#include "PFClientGetPlayFabIDsFromFacebookIDs.generated.h"

UCLASS()
class PLAYFABPROXY_API UPFClientGetPlayFabIDsFromFacebookIDs : public UOnlineBlueprintCallProxyBase
{
	GENERATED_UCLASS_BODY()
public:

	UPROPERTY(BlueprintAssignable)
	FBPClientGetPlayFabIDsFromFacebookIDsResultDelegate OnSuccess;

	UPROPERTY(BlueprintAssignable)
	FBPClientGetPlayFabIDsFromFacebookIDsResultDelegate OnFailure;
	
	// Retrieves the unique PlayFab identifiers for the given set of Facebook identifiers.
	UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true", WorldContext = "WorldContextObject"), Category = "PlayFab|Client|Account Management")
	static UPFClientGetPlayFabIDsFromFacebookIDs* GetPlayFabIDsFromFacebookIDs(UObject* WorldContextObject, class APlayerController* PlayerController, const TArray<FString>& InFacebookIDs);

	// UOnlineBlueprintCallProxyBase interface
	virtual void Activate() override;
	// End of UOnlineBlueprintCallProxyBase interface

private:

	PlayFab::ClientModels::FGetPlayFabIDsFromFacebookIDsRequest Request;

	PlayFab::UPlayFabClientAPI::FGetPlayFabIDsFromFacebookIDsDelegate	SuccessDelegate;
	PlayFab::FPlayFabErrorDelegate							ErrorDelegate;

	void OnSuccessCallback(const PlayFab::ClientModels::FGetPlayFabIDsFromFacebookIDsResult& Result);
	void OnErrorCallback(const PlayFab::FPlayFabError& Error);
};
