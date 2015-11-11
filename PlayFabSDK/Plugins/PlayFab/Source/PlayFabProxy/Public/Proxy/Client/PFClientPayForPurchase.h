// This is automatically generated by PlayFab SDKGenerator. DO NOT modify this manually!
#pragma once
#include "OnlineBlueprintCallProxyBase.h"

#include "Core/PlayFabClientAPI.h"
#include "Core/PlayFabClientDataModels.h"
#include "Proxy/PlayFabClientBPDataModels.h"
#include "PFClientPayForPurchase.generated.h"

UCLASS()
class PLAYFABPROXY_API UPFClientPayForPurchase : public UOnlineBlueprintCallProxyBase
{
	GENERATED_UCLASS_BODY()
public:

	UPROPERTY(BlueprintAssignable)
	FBPClientPayForPurchaseResultDelegate OnSuccess;

	UPROPERTY(BlueprintAssignable)
	FBPClientPayForPurchaseResultDelegate OnFailure;
	
	// Selects a payment option for purchase order created via StartPurchase
	UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true", WorldContext = "WorldContextObject"), Category = "PlayFab|Client|Player Item Management")
	static UPFClientPayForPurchase* PayForPurchase(UObject* WorldContextObject, class APlayerController* PlayerController, const FString& InOrderId, const FString& InProviderName, const FString& InCurrency, const FString& InProviderTransactionId);

	// UOnlineBlueprintCallProxyBase interface
	virtual void Activate() override;
	// End of UOnlineBlueprintCallProxyBase interface

private:

	PlayFab::ClientModels::FPayForPurchaseRequest Request;

	PlayFab::UPlayFabClientAPI::FPayForPurchaseDelegate	SuccessDelegate;
	PlayFab::FPlayFabErrorDelegate							ErrorDelegate;

	void OnSuccessCallback(const PlayFab::ClientModels::FPayForPurchaseResult& Result);
	void OnErrorCallback(const PlayFab::FPlayFabError& Error);
};