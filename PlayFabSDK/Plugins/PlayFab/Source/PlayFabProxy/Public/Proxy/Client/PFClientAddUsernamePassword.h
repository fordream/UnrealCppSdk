// This is automatically generated by PlayFab SDKGenerator. DO NOT modify this manually!
#pragma once
#include "OnlineBlueprintCallProxyBase.h"

#include "Core/PlayFabClientAPI.h"
#include "Core/PlayFabClientDataModels.h"
#include "Proxy/PlayFabClientBPDataModels.h"
#include "PFClientAddUsernamePassword.generated.h"

UCLASS()
class PLAYFABPROXY_API UPFClientAddUsernamePassword : public UOnlineBlueprintCallProxyBase
{
	GENERATED_UCLASS_BODY()
public:

	UPROPERTY(BlueprintAssignable)
	FBPClientAddUsernamePasswordResultDelegate OnSuccess;

	UPROPERTY(BlueprintAssignable)
	FBPClientAddUsernamePasswordResultDelegate OnFailure;
	
	// Adds playfab username/password auth to an existing semi-anonymous account created via a 3rd party auth method.
	UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true", WorldContext = "WorldContextObject"), Category = "PlayFab|Client|Account Management")
	static UPFClientAddUsernamePassword* AddUsernamePassword(UObject* WorldContextObject, class APlayerController* PlayerController, const FString& InUsername, const FString& InEmail, const FString& InPassword);

	// UOnlineBlueprintCallProxyBase interface
	virtual void Activate() override;
	// End of UOnlineBlueprintCallProxyBase interface

private:

	PlayFab::ClientModels::FAddUsernamePasswordRequest Request;

	PlayFab::UPlayFabClientAPI::FAddUsernamePasswordDelegate	SuccessDelegate;
	PlayFab::FPlayFabErrorDelegate							ErrorDelegate;

	void OnSuccessCallback(const PlayFab::ClientModels::FAddUsernamePasswordResult& Result);
	void OnErrorCallback(const PlayFab::FPlayFabError& Error);
};
