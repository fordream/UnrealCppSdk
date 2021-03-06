// This is automatically generated by PlayFab SDKGenerator. DO NOT modify this manually!
#pragma once
#include "OnlineBlueprintCallProxyBase.h"

#include "Core/PlayFabClientAPI.h"
#include "Core/PlayFabClientDataModels.h"
#include "Proxy/PlayFabClientBPDataModels.h"
#include "PFClientSendAccountRecoveryEmail.generated.h"

UCLASS()
class PLAYFABPROXY_API UPFClientSendAccountRecoveryEmail : public UOnlineBlueprintCallProxyBase
{
	GENERATED_UCLASS_BODY()
public:

	UPROPERTY(BlueprintAssignable)
	FEmptyOnlineDelegate OnSuccess; 

	UPROPERTY(BlueprintAssignable)
	FEmptyOnlineDelegate OnFailure; 
	
	// Forces an email to be sent to the registered email address for the user's account, with a link allowing the user to change the password
	UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true", WorldContext = "WorldContextObject"), Category = "PlayFab|Client|Account Management")
	static UPFClientSendAccountRecoveryEmail* SendAccountRecoveryEmail(UObject* WorldContextObject, class APlayerController* PlayerController, const FString& InEmail, const FString& InTitleId, const FString& InPublisherId);

	// UOnlineBlueprintCallProxyBase interface
	virtual void Activate() override;
	// End of UOnlineBlueprintCallProxyBase interface

private:

	PlayFab::ClientModels::FSendAccountRecoveryEmailRequest Request;

	PlayFab::UPlayFabClientAPI::FSendAccountRecoveryEmailDelegate	SuccessDelegate;
	PlayFab::FPlayFabErrorDelegate							ErrorDelegate;

	void OnSuccessCallback(const PlayFab::ClientModels::FSendAccountRecoveryEmailResult& Result);
	void OnErrorCallback(const PlayFab::FPlayFabError& Error);
};
