// This is automatically generated by PlayFab SDKGenerator. DO NOT modify this manually!
#pragma once
#include "OnlineBlueprintCallProxyBase.h"

#include "Core/PlayFabClientAPI.h"
#include "Core/PlayFabClientDataModels.h"
#include "Proxy/PlayFabClientBPDataModels.h"
#include "PFClientLinkKongregate.generated.h"

UCLASS()
class PLAYFABPROXY_API UPFClientLinkKongregate : public UOnlineBlueprintCallProxyBase
{
	GENERATED_UCLASS_BODY()
public:

	UPROPERTY(BlueprintAssignable)
	FEmptyOnlineDelegate OnSuccess; 

	UPROPERTY(BlueprintAssignable)
	FEmptyOnlineDelegate OnFailure; 
	
	// Links the Kongregate identifier to the user's PlayFab account
	UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true", WorldContext = "WorldContextObject"), Category = "PlayFab|Client|Account Management")
	static UPFClientLinkKongregate* LinkKongregate(UObject* WorldContextObject, class APlayerController* PlayerController, const FString& InKongregateId, const FString& InAuthTicket);

	// UOnlineBlueprintCallProxyBase interface
	virtual void Activate() override;
	// End of UOnlineBlueprintCallProxyBase interface

private:

	PlayFab::ClientModels::FLinkKongregateAccountRequest Request;

	PlayFab::UPlayFabClientAPI::FLinkKongregateDelegate	SuccessDelegate;
	PlayFab::FPlayFabErrorDelegate							ErrorDelegate;

	void OnSuccessCallback(const PlayFab::ClientModels::FLinkKongregateAccountResult& Result);
	void OnErrorCallback(const PlayFab::FPlayFabError& Error);
};