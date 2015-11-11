// This is automatically generated by PlayFab SDKGenerator. DO NOT modify this manually!
#pragma once
#include "OnlineBlueprintCallProxyBase.h"

#include "Core/PlayFabClientAPI.h"
#include "Core/PlayFabClientDataModels.h"
#include "Proxy/PlayFabClientBPDataModels.h"
#include "PFClientConfirmPurchase.generated.h"

UCLASS()
class PLAYFABPROXY_API UPFClientConfirmPurchase : public UOnlineBlueprintCallProxyBase
{
	GENERATED_UCLASS_BODY()
public:

	UPROPERTY(BlueprintAssignable)
	FBPClientConfirmPurchaseResultDelegate OnSuccess;

	UPROPERTY(BlueprintAssignable)
	FBPClientConfirmPurchaseResultDelegate OnFailure;
	
	// Confirms with the payment provider that the purchase was approved (if applicable) and adjusts inventory and virtual currency balances as appropriate
	UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true", WorldContext = "WorldContextObject"), Category = "PlayFab|Client|Player Item Management")
	static UPFClientConfirmPurchase* ConfirmPurchase(UObject* WorldContextObject, class APlayerController* PlayerController, const FString& InOrderId);

	// UOnlineBlueprintCallProxyBase interface
	virtual void Activate() override;
	// End of UOnlineBlueprintCallProxyBase interface

private:

	PlayFab::ClientModels::FConfirmPurchaseRequest Request;

	PlayFab::UPlayFabClientAPI::FConfirmPurchaseDelegate	SuccessDelegate;
	PlayFab::FPlayFabErrorDelegate							ErrorDelegate;

	void OnSuccessCallback(const PlayFab::ClientModels::FConfirmPurchaseResult& Result);
	void OnErrorCallback(const PlayFab::FPlayFabError& Error);
};