// This is automatically generated by PlayFab SDKGenerator. DO NOT modify this manually!
#pragma once
#include "OnlineBlueprintCallProxyBase.h"

#include "Core/PlayFabServerAPI.h"
#include "Core/PlayFabServerDataModels.h"
#include "Proxy/PlayFabServerBPDataModels.h"
#include "PFServerGetTitleNews.generated.h"

UCLASS()
class PLAYFABPROXY_API UPFServerGetTitleNews : public UOnlineBlueprintCallProxyBase
{
	GENERATED_UCLASS_BODY()
public:

	UPROPERTY(BlueprintAssignable)
	FBPServerGetTitleNewsResultDelegate OnSuccess;

	UPROPERTY(BlueprintAssignable)
	FBPServerGetTitleNewsResultDelegate OnFailure;
	
	// Retrieves the title news feed, as configured in the developer portal
	UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true", WorldContext = "WorldContextObject"), Category = "PlayFab|Server|Title-Wide Data Management")
	static UPFServerGetTitleNews* GetTitleNews(UObject* WorldContextObject, class APlayerController* PlayerController, const int32& InCount);

	// UOnlineBlueprintCallProxyBase interface
	virtual void Activate() override;
	// End of UOnlineBlueprintCallProxyBase interface

private:

	PlayFab::ServerModels::FGetTitleNewsRequest Request;

	PlayFab::UPlayFabServerAPI::FGetTitleNewsDelegate	SuccessDelegate;
	PlayFab::FPlayFabErrorDelegate							ErrorDelegate;

	void OnSuccessCallback(const PlayFab::ServerModels::FGetTitleNewsResult& Result);
	void OnErrorCallback(const PlayFab::FPlayFabError& Error);
};
