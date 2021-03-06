// This is automatically generated by PlayFab SDKGenerator. DO NOT modify this manually!
#pragma once
#include "OnlineBlueprintCallProxyBase.h"

#include "Core/PlayFabClientAPI.h"
#include "Core/PlayFabClientDataModels.h"
#include "Proxy/PlayFabClientBPDataModels.h"
#include "PFClientGetLeaderboard.generated.h"

UCLASS()
class PLAYFABPROXY_API UPFClientGetLeaderboard : public UOnlineBlueprintCallProxyBase
{
	GENERATED_UCLASS_BODY()
public:

	UPROPERTY(BlueprintAssignable)
	FBPClientGetLeaderboardResultDelegate OnSuccess;

	UPROPERTY(BlueprintAssignable)
	FBPClientGetLeaderboardResultDelegate OnFailure;
	
	// Retrieves a list of ranked users for the given statistic, starting from the indicated point in the leaderboard
	UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true", WorldContext = "WorldContextObject"), Category = "PlayFab|Client|Player Data Management")
	static UPFClientGetLeaderboard* GetLeaderboard(UObject* WorldContextObject, class APlayerController* PlayerController, const FString& InStatisticName, const int32& InStartPosition, const int32& InMaxResultsCount);

	// UOnlineBlueprintCallProxyBase interface
	virtual void Activate() override;
	// End of UOnlineBlueprintCallProxyBase interface

private:

	PlayFab::ClientModels::FGetLeaderboardRequest Request;

	PlayFab::UPlayFabClientAPI::FGetLeaderboardDelegate	SuccessDelegate;
	PlayFab::FPlayFabErrorDelegate							ErrorDelegate;

	void OnSuccessCallback(const PlayFab::ClientModels::FGetLeaderboardResult& Result);
	void OnErrorCallback(const PlayFab::FPlayFabError& Error);
};
