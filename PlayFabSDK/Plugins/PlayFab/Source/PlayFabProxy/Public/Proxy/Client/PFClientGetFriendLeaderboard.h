// This is automatically generated by PlayFab SDKGenerator. DO NOT modify this manually!
#pragma once
#include "OnlineBlueprintCallProxyBase.h"

#include "Core/PlayFabClientAPI.h"
#include "Core/PlayFabClientDataModels.h"
#include "Proxy/PlayFabClientBPDataModels.h"
#include "PFClientGetFriendLeaderboard.generated.h"

UCLASS()
class PLAYFABPROXY_API UPFClientGetFriendLeaderboard : public UOnlineBlueprintCallProxyBase
{
	GENERATED_UCLASS_BODY()
public:

	UPROPERTY(BlueprintAssignable)
	FBPClientGetLeaderboardResultDelegate OnSuccess;

	UPROPERTY(BlueprintAssignable)
	FBPClientGetLeaderboardResultDelegate OnFailure;
	
	// Retrieves a list of ranked friends of the current player for the given statistic, starting from the indicated point in the leaderboard
	UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true", WorldContext = "WorldContextObject"), Category = "PlayFab|Client|Player Data Management")
	static UPFClientGetFriendLeaderboard* GetFriendLeaderboard(UObject* WorldContextObject, class APlayerController* PlayerController, const FString& InStatisticName, const int32& InStartPosition, const int32& InMaxResultsCount, const bool& InIncludeSteamFriends, const bool& InIncludeFacebookFriends);

	// UOnlineBlueprintCallProxyBase interface
	virtual void Activate() override;
	// End of UOnlineBlueprintCallProxyBase interface

private:

	PlayFab::ClientModels::FGetFriendLeaderboardRequest Request;

	PlayFab::UPlayFabClientAPI::FGetFriendLeaderboardDelegate	SuccessDelegate;
	PlayFab::FPlayFabErrorDelegate							ErrorDelegate;

	void OnSuccessCallback(const PlayFab::ClientModels::FGetLeaderboardResult& Result);
	void OnErrorCallback(const PlayFab::FPlayFabError& Error);
};
