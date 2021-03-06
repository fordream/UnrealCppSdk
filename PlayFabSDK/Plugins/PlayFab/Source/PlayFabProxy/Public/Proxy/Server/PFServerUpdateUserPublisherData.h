// This is automatically generated by PlayFab SDKGenerator. DO NOT modify this manually!
#pragma once
#include "OnlineBlueprintCallProxyBase.h"

#include "Core/PlayFabServerAPI.h"
#include "Core/PlayFabServerDataModels.h"
#include "Proxy/PlayFabServerBPDataModels.h"
#include "PFServerUpdateUserPublisherData.generated.h"

UCLASS()
class PLAYFABPROXY_API UPFServerUpdateUserPublisherData : public UOnlineBlueprintCallProxyBase
{
	GENERATED_UCLASS_BODY()
public:

	UPROPERTY(BlueprintAssignable)
	FBPServerUpdateUserDataResultDelegate OnSuccess;

	UPROPERTY(BlueprintAssignable)
	FBPServerUpdateUserDataResultDelegate OnFailure;
	
	// Updates the publisher-specific custom data for the user which is readable and writable by the client
	UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true", WorldContext = "WorldContextObject"), Category = "PlayFab|Server|Player Data Management")
	static UPFServerUpdateUserPublisherData* UpdateUserPublisherData(UObject* WorldContextObject, class APlayerController* PlayerController, const FString& InPlayFabId, const FString& InData, const TArray<FString>& InKeysToRemove);

	// UOnlineBlueprintCallProxyBase interface
	virtual void Activate() override;
	// End of UOnlineBlueprintCallProxyBase interface

private:

	PlayFab::ServerModels::FUpdateUserDataRequest Request;

	PlayFab::UPlayFabServerAPI::FUpdateUserPublisherDataDelegate	SuccessDelegate;
	PlayFab::FPlayFabErrorDelegate							ErrorDelegate;

	void OnSuccessCallback(const PlayFab::ServerModels::FUpdateUserDataResult& Result);
	void OnErrorCallback(const PlayFab::FPlayFabError& Error);
};
