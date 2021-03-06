// This is automatically generated by PlayFab SDKGenerator. DO NOT modify this manually!
#pragma once
#include "OnlineBlueprintCallProxyBase.h"

#include "Core/PlayFabServerAPI.h"
#include "Core/PlayFabServerDataModels.h"
#include "Proxy/PlayFabServerBPDataModels.h"
#include "PFServerGetUserInternalData.generated.h"

UCLASS()
class PLAYFABPROXY_API UPFServerGetUserInternalData : public UOnlineBlueprintCallProxyBase
{
	GENERATED_UCLASS_BODY()
public:

	UPROPERTY(BlueprintAssignable)
	FBPServerGetUserDataResultDelegate OnSuccess;

	UPROPERTY(BlueprintAssignable)
	FBPServerGetUserDataResultDelegate OnFailure;
	
	// Retrieves the title-specific custom data for the user which cannot be accessed by the client
	UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true", WorldContext = "WorldContextObject"), Category = "PlayFab|Server|Player Data Management")
	static UPFServerGetUserInternalData* GetUserInternalData(UObject* WorldContextObject, class APlayerController* PlayerController, const FString& InPlayFabId, const TArray<FString>& InKeys, const int32& InIfChangedFromDataVersion);

	// UOnlineBlueprintCallProxyBase interface
	virtual void Activate() override;
	// End of UOnlineBlueprintCallProxyBase interface

private:

	PlayFab::ServerModels::FGetUserDataRequest Request;

	PlayFab::UPlayFabServerAPI::FGetUserInternalDataDelegate	SuccessDelegate;
	PlayFab::FPlayFabErrorDelegate							ErrorDelegate;

	void OnSuccessCallback(const PlayFab::ServerModels::FGetUserDataResult& Result);
	void OnErrorCallback(const PlayFab::FPlayFabError& Error);
};
