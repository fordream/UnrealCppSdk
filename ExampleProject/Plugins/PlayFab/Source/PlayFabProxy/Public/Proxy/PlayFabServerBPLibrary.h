// This is automatically generated by PlayFab SDKGenerator. DO NOT modify this manually!
#pragma once

#include "Core/PlayFabServerAPI.h"
#include "Core/PlayFabServerDataModels.h"
#include "PlayFabServerBPDataModels.h"
#include "PlayFabServerBPLibrary.generated.h"

UCLASS()
class UPFServerProxyLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

	public:

	
	UFUNCTION(BlueprintPure, Category = "PlayFab|Server", meta = (NativeBreakFunc))
	static void BreakBPServerAddCharacterVirtualCurrencyRequest(
		const FBPServerAddCharacterVirtualCurrencyRequest& In
        ,FString& OutPlayFabId
        ,FString& OutCharacterId
        ,FString& OutVirtualCurrency
        ,int32& OutAmount
	);
	
	UFUNCTION(BlueprintPure, Category = "PlayFab|Server", meta = (NativeBreakFunc))
	static void BreakBPServerAddFriendRequest(
		const FBPServerAddFriendRequest& In
        ,FString& OutPlayFabId
        ,FString& OutFriendPlayFabId
        ,FString& OutFriendUsername
        ,FString& OutFriendEmail
        ,FString& OutFriendTitleDisplayName
	);
	
	UFUNCTION(BlueprintPure, Category = "PlayFab|Server", meta = (NativeBreakFunc))
	static void BreakBPServerAddSharedGroupMembersRequest(
		const FBPServerAddSharedGroupMembersRequest& In
        ,FString& OutSharedGroupId
        ,TArray<FString>& OutPlayFabIds
	);
	
	UFUNCTION(BlueprintPure, Category = "PlayFab|Server", meta = (NativeBreakFunc))
	static void BreakBPServerAddSharedGroupMembersResult(
		const FBPServerAddSharedGroupMembersResult& In
	);
	
	UFUNCTION(BlueprintPure, Category = "PlayFab|Server", meta = (NativeBreakFunc))
	static void BreakBPServerAddUserVirtualCurrencyRequest(
		const FBPServerAddUserVirtualCurrencyRequest& In
        ,FString& OutPlayFabId
        ,FString& OutVirtualCurrency
        ,int32& OutAmount
	);
	
	UFUNCTION(BlueprintPure, Category = "PlayFab|Server", meta = (NativeBreakFunc))
	static void BreakBPServerAuthenticateSessionTicketRequest(
		const FBPServerAuthenticateSessionTicketRequest& In
        ,FString& OutSessionTicket
	);
	
	UFUNCTION(BlueprintPure, Category = "PlayFab|Server", meta = (NativeBreakFunc))
	static void BreakBPServerAuthenticateSessionTicketResult(
		const FBPServerAuthenticateSessionTicketResult& In
        ,FBPServerUserAccountInfo& OutUserInfo
	);
	
	UFUNCTION(BlueprintPure, Category = "PlayFab|Server", meta = (NativeBreakFunc))
	static void BreakBPServerAwardSteamAchievementItem(
		const FBPServerAwardSteamAchievementItem& In
        ,FString& OutPlayFabId
        ,FString& OutAchievementName
        ,bool& OutResult
	);
	
	UFUNCTION(BlueprintPure, Category = "PlayFab|Server", meta = (NativeBreakFunc))
	static void BreakBPServerAwardSteamAchievementRequest(
		const FBPServerAwardSteamAchievementRequest& In
        ,TArray<FBPServerAwardSteamAchievementItem>& OutAchievements
	);
	
	UFUNCTION(BlueprintPure, Category = "PlayFab|Server", meta = (NativeBreakFunc))
	static void BreakBPServerAwardSteamAchievementResult(
		const FBPServerAwardSteamAchievementResult& In
        ,TArray<FBPServerAwardSteamAchievementItem>& OutAchievementResults
	);
	
	UFUNCTION(BlueprintPure, Category = "PlayFab|Server", meta = (NativeBreakFunc))
	static void BreakBPServerCatalogItem(
		const FBPServerCatalogItem& In
        ,FString& OutItemId
        ,FString& OutItemClass
        ,FString& OutCatalogVersion
        ,FString& OutDisplayName
        ,FString& OutDescription
        ,TArray<FString>& OutTags
        ,FString& OutCustomData
        ,FBPServerCatalogItemConsumableInfo& OutConsumable
        ,FBPServerCatalogItemContainerInfo& OutContainer
        ,FBPServerCatalogItemBundleInfo& OutBundle
        ,bool& OutCanBecomeCharacter
        ,bool& OutIsStackable
        ,bool& OutIsTradable
        ,FString& OutItemImageUrl
	);
	
	UFUNCTION(BlueprintPure, Category = "PlayFab|Server", meta = (NativeBreakFunc))
	static void BreakBPServerCatalogItemBundleInfo(
		const FBPServerCatalogItemBundleInfo& In
        ,TArray<FString>& OutBundledItems
        ,TArray<FString>& OutBundledResultTables
	);
	
	UFUNCTION(BlueprintPure, Category = "PlayFab|Server", meta = (NativeBreakFunc))
	static void BreakBPServerCatalogItemConsumableInfo(
		const FBPServerCatalogItemConsumableInfo& In
        ,int32& OutUsageCount
        ,int32& OutUsagePeriod
        ,FString& OutUsagePeriodGroup
	);
	
	UFUNCTION(BlueprintPure, Category = "PlayFab|Server", meta = (NativeBreakFunc))
	static void BreakBPServerCatalogItemContainerInfo(
		const FBPServerCatalogItemContainerInfo& In
        ,FString& OutKeyItemId
        ,TArray<FString>& OutItemContents
        ,TArray<FString>& OutResultTableContents
	);
	
	UFUNCTION(BlueprintPure, Category = "PlayFab|Server", meta = (NativeBreakFunc))
	static void BreakBPServerCharacterLeaderboardEntry(
		const FBPServerCharacterLeaderboardEntry& In
        ,FString& OutPlayFabId
        ,FString& OutCharacterId
        ,FString& OutCharacterName
        ,FString& OutDisplayName
        ,FString& OutCharacterType
        ,int32& OutStatValue
        ,int32& OutPosition
	);
	
	UFUNCTION(BlueprintPure, Category = "PlayFab|Server", meta = (NativeBreakFunc))
	static void BreakBPServerCharacterResult(
		const FBPServerCharacterResult& In
        ,FString& OutCharacterId
        ,FString& OutCharacterName
        ,FString& OutCharacterType
	);
	
	UFUNCTION(BlueprintPure, Category = "PlayFab|Server", meta = (NativeBreakFunc))
	static void BreakBPServerCreateSharedGroupRequest(
		const FBPServerCreateSharedGroupRequest& In
        ,FString& OutSharedGroupId
	);
	
	UFUNCTION(BlueprintPure, Category = "PlayFab|Server", meta = (NativeBreakFunc))
	static void BreakBPServerCreateSharedGroupResult(
		const FBPServerCreateSharedGroupResult& In
        ,FString& OutSharedGroupId
	);
	
	UFUNCTION(BlueprintPure, Category = "PlayFab|Server", meta = (NativeBreakFunc))
	static void BreakBPServerCurrency(
		const FBPServerCurrency& In
	);
	
	UFUNCTION(BlueprintPure, Category = "PlayFab|Server", meta = (NativeBreakFunc))
	static void BreakBPServerDeleteCharacterFromUserRequest(
		const FBPServerDeleteCharacterFromUserRequest& In
        ,FString& OutPlayFabId
        ,FString& OutCharacterId
        ,bool& OutSaveCharacterInventory
	);
	
	UFUNCTION(BlueprintPure, Category = "PlayFab|Server", meta = (NativeBreakFunc))
	static void BreakBPServerDeleteCharacterFromUserResult(
		const FBPServerDeleteCharacterFromUserResult& In
	);
	
	UFUNCTION(BlueprintPure, Category = "PlayFab|Server", meta = (NativeBreakFunc))
	static void BreakBPServerDeleteSharedGroupRequest(
		const FBPServerDeleteSharedGroupRequest& In
        ,FString& OutSharedGroupId
	);
	
	UFUNCTION(BlueprintPure, Category = "PlayFab|Server", meta = (NativeBreakFunc))
	static void BreakBPServerEmptyResult(
		const FBPServerEmptyResult& In
	);
	
	UFUNCTION(BlueprintPure, Category = "PlayFab|Server", meta = (NativeBreakFunc))
	static void BreakBPServerFacebookPlayFabIdPair(
		const FBPServerFacebookPlayFabIdPair& In
        ,FString& OutFacebookId
        ,FString& OutPlayFabId
	);
	
	UFUNCTION(BlueprintPure, Category = "PlayFab|Server", meta = (NativeBreakFunc))
	static void BreakBPServerFriendInfo(
		const FBPServerFriendInfo& In
        ,FString& OutFriendPlayFabId
        ,FString& OutUsername
        ,FString& OutTitleDisplayName
        ,TArray<FString>& OutTags
        ,FString& OutCurrentMatchmakerLobbyId
        ,FBPServerUserFacebookInfo& OutFacebookInfo
        ,FBPServerUserSteamInfo& OutSteamInfo
        ,FBPServerUserGameCenterInfo& OutGameCenterInfo
	);
	
	UFUNCTION(BlueprintPure, Category = "PlayFab|Server", meta = (NativeBreakFunc))
	static void BreakBPServerGetCatalogItemsRequest(
		const FBPServerGetCatalogItemsRequest& In
        ,FString& OutCatalogVersion
	);
	
	UFUNCTION(BlueprintPure, Category = "PlayFab|Server", meta = (NativeBreakFunc))
	static void BreakBPServerGetCatalogItemsResult(
		const FBPServerGetCatalogItemsResult& In
        ,TArray<FBPServerCatalogItem>& OutCatalog
	);
	
	UFUNCTION(BlueprintPure, Category = "PlayFab|Server", meta = (NativeBreakFunc))
	static void BreakBPServerGetCharacterDataRequest(
		const FBPServerGetCharacterDataRequest& In
        ,FString& OutPlayFabId
        ,FString& OutCharacterId
        ,TArray<FString>& OutKeys
        ,int32& OutIfChangedFromDataVersion
	);
	
	UFUNCTION(BlueprintPure, Category = "PlayFab|Server", meta = (NativeBreakFunc))
	static void BreakBPServerGetCharacterDataResult(
		const FBPServerGetCharacterDataResult& In
        ,FString& OutPlayFabId
        ,int32& OutDataVersion
        ,FString& OutCharacterId
	);
	
	UFUNCTION(BlueprintPure, Category = "PlayFab|Server", meta = (NativeBreakFunc))
	static void BreakBPServerGetCharacterInventoryRequest(
		const FBPServerGetCharacterInventoryRequest& In
        ,FString& OutPlayFabId
        ,FString& OutCharacterId
        ,FString& OutCatalogVersion
	);
	
	UFUNCTION(BlueprintPure, Category = "PlayFab|Server", meta = (NativeBreakFunc))
	static void BreakBPServerGetCharacterInventoryResult(
		const FBPServerGetCharacterInventoryResult& In
        ,FString& OutPlayFabId
        ,FString& OutCharacterId
        ,TArray<FBPServerItemInstance>& OutInventory
	);
	
	UFUNCTION(BlueprintPure, Category = "PlayFab|Server", meta = (NativeBreakFunc))
	static void BreakBPServerGetCharacterLeaderboardRequest(
		const FBPServerGetCharacterLeaderboardRequest& In
        ,FString& OutCharacterId
        ,FString& OutCharacterType
        ,FString& OutStatisticName
        ,int32& OutStartPosition
        ,int32& OutMaxResultsCount
	);
	
	UFUNCTION(BlueprintPure, Category = "PlayFab|Server", meta = (NativeBreakFunc))
	static void BreakBPServerGetCharacterLeaderboardResult(
		const FBPServerGetCharacterLeaderboardResult& In
        ,TArray<FBPServerCharacterLeaderboardEntry>& OutLeaderboard
	);
	
	UFUNCTION(BlueprintPure, Category = "PlayFab|Server", meta = (NativeBreakFunc))
	static void BreakBPServerGetCharacterStatisticsRequest(
		const FBPServerGetCharacterStatisticsRequest& In
        ,FString& OutPlayFabId
        ,FString& OutCharacterId
	);
	
	UFUNCTION(BlueprintPure, Category = "PlayFab|Server", meta = (NativeBreakFunc))
	static void BreakBPServerGetCharacterStatisticsResult(
		const FBPServerGetCharacterStatisticsResult& In
        ,FString& OutPlayFabId
        ,FString& OutCharacterId
	);
	
	UFUNCTION(BlueprintPure, Category = "PlayFab|Server", meta = (NativeBreakFunc))
	static void BreakBPServerGetContentDownloadUrlRequest(
		const FBPServerGetContentDownloadUrlRequest& In
        ,FString& OutKey
        ,FString& OutHttpMethod
        ,bool& OutThruCDN
	);
	
	UFUNCTION(BlueprintPure, Category = "PlayFab|Server", meta = (NativeBreakFunc))
	static void BreakBPServerGetContentDownloadUrlResult(
		const FBPServerGetContentDownloadUrlResult& In
        ,FString& OutURL
	);
	
	UFUNCTION(BlueprintPure, Category = "PlayFab|Server", meta = (NativeBreakFunc))
	static void BreakBPServerGetFriendLeaderboardRequest(
		const FBPServerGetFriendLeaderboardRequest& In
        ,FString& OutPlayFabId
        ,FString& OutStatisticName
        ,int32& OutStartPosition
        ,int32& OutMaxResultsCount
        ,bool& OutIncludeSteamFriends
        ,bool& OutIncludeFacebookFriends
	);
	
	UFUNCTION(BlueprintPure, Category = "PlayFab|Server", meta = (NativeBreakFunc))
	static void BreakBPServerGetFriendsListRequest(
		const FBPServerGetFriendsListRequest& In
        ,FString& OutPlayFabId
        ,bool& OutIncludeSteamFriends
        ,bool& OutIncludeFacebookFriends
	);
	
	UFUNCTION(BlueprintPure, Category = "PlayFab|Server", meta = (NativeBreakFunc))
	static void BreakBPServerGetFriendsListResult(
		const FBPServerGetFriendsListResult& In
        ,TArray<FBPServerFriendInfo>& OutFriends
	);
	
	UFUNCTION(BlueprintPure, Category = "PlayFab|Server", meta = (NativeBreakFunc))
	static void BreakBPServerGetLeaderboardAroundCharacterRequest(
		const FBPServerGetLeaderboardAroundCharacterRequest& In
        ,FString& OutStatisticName
        ,FString& OutPlayFabId
        ,FString& OutCharacterId
        ,FString& OutCharacterType
        ,int32& OutMaxResultsCount
	);
	
	UFUNCTION(BlueprintPure, Category = "PlayFab|Server", meta = (NativeBreakFunc))
	static void BreakBPServerGetLeaderboardAroundCharacterResult(
		const FBPServerGetLeaderboardAroundCharacterResult& In
        ,TArray<FBPServerCharacterLeaderboardEntry>& OutLeaderboard
	);
	
	UFUNCTION(BlueprintPure, Category = "PlayFab|Server", meta = (NativeBreakFunc))
	static void BreakBPServerGetLeaderboardAroundUserRequest(
		const FBPServerGetLeaderboardAroundUserRequest& In
        ,FString& OutStatisticName
        ,FString& OutPlayFabId
        ,int32& OutMaxResultsCount
	);
	
	UFUNCTION(BlueprintPure, Category = "PlayFab|Server", meta = (NativeBreakFunc))
	static void BreakBPServerGetLeaderboardAroundUserResult(
		const FBPServerGetLeaderboardAroundUserResult& In
        ,TArray<FBPServerPlayerLeaderboardEntry>& OutLeaderboard
	);
	
	UFUNCTION(BlueprintPure, Category = "PlayFab|Server", meta = (NativeBreakFunc))
	static void BreakBPServerGetLeaderboardForUsersCharactersRequest(
		const FBPServerGetLeaderboardForUsersCharactersRequest& In
        ,FString& OutStatisticName
        ,FString& OutPlayFabId
        ,int32& OutMaxResultsCount
	);
	
	UFUNCTION(BlueprintPure, Category = "PlayFab|Server", meta = (NativeBreakFunc))
	static void BreakBPServerGetLeaderboardForUsersCharactersResult(
		const FBPServerGetLeaderboardForUsersCharactersResult& In
        ,TArray<FBPServerCharacterLeaderboardEntry>& OutLeaderboard
	);
	
	UFUNCTION(BlueprintPure, Category = "PlayFab|Server", meta = (NativeBreakFunc))
	static void BreakBPServerGetLeaderboardRequest(
		const FBPServerGetLeaderboardRequest& In
        ,FString& OutStatisticName
        ,int32& OutStartPosition
        ,int32& OutMaxResultsCount
	);
	
	UFUNCTION(BlueprintPure, Category = "PlayFab|Server", meta = (NativeBreakFunc))
	static void BreakBPServerGetLeaderboardResult(
		const FBPServerGetLeaderboardResult& In
        ,TArray<FBPServerPlayerLeaderboardEntry>& OutLeaderboard
	);
	
	UFUNCTION(BlueprintPure, Category = "PlayFab|Server", meta = (NativeBreakFunc))
	static void BreakBPServerGetPlayFabIDsFromFacebookIDsRequest(
		const FBPServerGetPlayFabIDsFromFacebookIDsRequest& In
        ,TArray<FString>& OutFacebookIDs
	);
	
	UFUNCTION(BlueprintPure, Category = "PlayFab|Server", meta = (NativeBreakFunc))
	static void BreakBPServerGetPlayFabIDsFromFacebookIDsResult(
		const FBPServerGetPlayFabIDsFromFacebookIDsResult& In
        ,TArray<FBPServerFacebookPlayFabIdPair>& OutData
	);
	
	UFUNCTION(BlueprintPure, Category = "PlayFab|Server", meta = (NativeBreakFunc))
	static void BreakBPServerGetPublisherDataRequest(
		const FBPServerGetPublisherDataRequest& In
        ,TArray<FString>& OutKeys
	);
	
	UFUNCTION(BlueprintPure, Category = "PlayFab|Server", meta = (NativeBreakFunc))
	static void BreakBPServerGetPublisherDataResult(
		const FBPServerGetPublisherDataResult& In
	);
	
	UFUNCTION(BlueprintPure, Category = "PlayFab|Server", meta = (NativeBreakFunc))
	static void BreakBPServerGetSharedGroupDataRequest(
		const FBPServerGetSharedGroupDataRequest& In
        ,FString& OutSharedGroupId
        ,TArray<FString>& OutKeys
        ,bool& OutGetMembers
	);
	
	UFUNCTION(BlueprintPure, Category = "PlayFab|Server", meta = (NativeBreakFunc))
	static void BreakBPServerGetSharedGroupDataResult(
		const FBPServerGetSharedGroupDataResult& In
        ,TArray<FString>& OutMembers
	);
	
	UFUNCTION(BlueprintPure, Category = "PlayFab|Server", meta = (NativeBreakFunc))
	static void BreakBPServerGetTitleDataRequest(
		const FBPServerGetTitleDataRequest& In
        ,TArray<FString>& OutKeys
	);
	
	UFUNCTION(BlueprintPure, Category = "PlayFab|Server", meta = (NativeBreakFunc))
	static void BreakBPServerGetTitleDataResult(
		const FBPServerGetTitleDataResult& In
	);
	
	UFUNCTION(BlueprintPure, Category = "PlayFab|Server", meta = (NativeBreakFunc))
	static void BreakBPServerGetTitleNewsRequest(
		const FBPServerGetTitleNewsRequest& In
        ,int32& OutCount
	);
	
	UFUNCTION(BlueprintPure, Category = "PlayFab|Server", meta = (NativeBreakFunc))
	static void BreakBPServerGetTitleNewsResult(
		const FBPServerGetTitleNewsResult& In
        ,TArray<FBPServerTitleNewsItem>& OutNews
	);
	
	UFUNCTION(BlueprintPure, Category = "PlayFab|Server", meta = (NativeBreakFunc))
	static void BreakBPServerGetUserAccountInfoRequest(
		const FBPServerGetUserAccountInfoRequest& In
        ,FString& OutPlayFabId
	);
	
	UFUNCTION(BlueprintPure, Category = "PlayFab|Server", meta = (NativeBreakFunc))
	static void BreakBPServerGetUserAccountInfoResult(
		const FBPServerGetUserAccountInfoResult& In
        ,FBPServerUserAccountInfo& OutUserInfo
	);
	
	UFUNCTION(BlueprintPure, Category = "PlayFab|Server", meta = (NativeBreakFunc))
	static void BreakBPServerGetUserDataRequest(
		const FBPServerGetUserDataRequest& In
        ,FString& OutPlayFabId
        ,TArray<FString>& OutKeys
        ,int32& OutIfChangedFromDataVersion
	);
	
	UFUNCTION(BlueprintPure, Category = "PlayFab|Server", meta = (NativeBreakFunc))
	static void BreakBPServerGetUserDataResult(
		const FBPServerGetUserDataResult& In
        ,FString& OutPlayFabId
        ,int32& OutDataVersion
	);
	
	UFUNCTION(BlueprintPure, Category = "PlayFab|Server", meta = (NativeBreakFunc))
	static void BreakBPServerGetUserInventoryRequest(
		const FBPServerGetUserInventoryRequest& In
        ,FString& OutPlayFabId
	);
	
	UFUNCTION(BlueprintPure, Category = "PlayFab|Server", meta = (NativeBreakFunc))
	static void BreakBPServerGetUserInventoryResult(
		const FBPServerGetUserInventoryResult& In
        ,FString& OutPlayFabId
        ,TArray<FBPServerItemInstance>& OutInventory
	);
	
	UFUNCTION(BlueprintPure, Category = "PlayFab|Server", meta = (NativeBreakFunc))
	static void BreakBPServerGetUserStatisticsRequest(
		const FBPServerGetUserStatisticsRequest& In
        ,FString& OutPlayFabId
	);
	
	UFUNCTION(BlueprintPure, Category = "PlayFab|Server", meta = (NativeBreakFunc))
	static void BreakBPServerGetUserStatisticsResult(
		const FBPServerGetUserStatisticsResult& In
        ,FString& OutPlayFabId
	);
	
	UFUNCTION(BlueprintPure, Category = "PlayFab|Server", meta = (NativeBreakFunc))
	static void BreakBPServerGrantCharacterToUserRequest(
		const FBPServerGrantCharacterToUserRequest& In
        ,FString& OutPlayFabId
        ,FString& OutCharacterName
        ,FString& OutCharacterType
	);
	
	UFUNCTION(BlueprintPure, Category = "PlayFab|Server", meta = (NativeBreakFunc))
	static void BreakBPServerGrantCharacterToUserResult(
		const FBPServerGrantCharacterToUserResult& In
        ,FString& OutCharacterId
	);
	
	UFUNCTION(BlueprintPure, Category = "PlayFab|Server", meta = (NativeBreakFunc))
	static void BreakBPServerGrantedItemInstance(
		const FBPServerGrantedItemInstance& In
        ,FString& OutPlayFabId
        ,FString& OutCharacterId
        ,bool& OutResult
        ,FString& OutItemId
        ,FString& OutItemInstanceId
        ,FString& OutItemClass
        ,FDateTime& OutPurchaseDate
        ,FDateTime& OutExpiration
        ,int32& OutRemainingUses
        ,int32& OutUsesIncrementedBy
        ,FString& OutAnnotation
        ,FString& OutCatalogVersion
        ,FString& OutBundleParent
        ,FString& OutDisplayName
        ,FString& OutUnitCurrency
        ,int32& OutUnitPrice
        ,TArray<FString>& OutBundleContents
	);
	
	UFUNCTION(BlueprintPure, Category = "PlayFab|Server", meta = (NativeBreakFunc))
	static void BreakBPServerGrantItemsToCharacterRequest(
		const FBPServerGrantItemsToCharacterRequest& In
        ,FString& OutCatalogVersion
        ,FString& OutCharacterId
        ,FString& OutPlayFabId
        ,FString& OutAnnotation
        ,TArray<FString>& OutItemIds
	);
	
	UFUNCTION(BlueprintPure, Category = "PlayFab|Server", meta = (NativeBreakFunc))
	static void BreakBPServerGrantItemsToCharacterResult(
		const FBPServerGrantItemsToCharacterResult& In
        ,TArray<FBPServerGrantedItemInstance>& OutItemGrantResults
	);
	
	UFUNCTION(BlueprintPure, Category = "PlayFab|Server", meta = (NativeBreakFunc))
	static void BreakBPServerGrantItemsToUserRequest(
		const FBPServerGrantItemsToUserRequest& In
        ,FString& OutCatalogVersion
        ,FString& OutPlayFabId
        ,FString& OutAnnotation
        ,TArray<FString>& OutItemIds
	);
	
	UFUNCTION(BlueprintPure, Category = "PlayFab|Server", meta = (NativeBreakFunc))
	static void BreakBPServerGrantItemsToUserResult(
		const FBPServerGrantItemsToUserResult& In
        ,TArray<FBPServerGrantedItemInstance>& OutItemGrantResults
	);
	
	UFUNCTION(BlueprintPure, Category = "PlayFab|Server", meta = (NativeBreakFunc))
	static void BreakBPServerGrantItemsToUsersRequest(
		const FBPServerGrantItemsToUsersRequest& In
        ,FString& OutCatalogVersion
        ,TArray<FBPServerItemGrant>& OutItemGrants
	);
	
	UFUNCTION(BlueprintPure, Category = "PlayFab|Server", meta = (NativeBreakFunc))
	static void BreakBPServerGrantItemsToUsersResult(
		const FBPServerGrantItemsToUsersResult& In
        ,TArray<FBPServerGrantedItemInstance>& OutItemGrantResults
	);
	
	UFUNCTION(BlueprintPure, Category = "PlayFab|Server", meta = (NativeBreakFunc))
	static void BreakBPServerItemGrant(
		const FBPServerItemGrant& In
        ,FString& OutPlayFabId
        ,FString& OutItemId
        ,FString& OutAnnotation
        ,FString& OutCharacterId
	);
	
	UFUNCTION(BlueprintPure, Category = "PlayFab|Server", meta = (NativeBreakFunc))
	static void BreakBPServerItemInstance(
		const FBPServerItemInstance& In
        ,FString& OutItemId
        ,FString& OutItemInstanceId
        ,FString& OutItemClass
        ,FDateTime& OutPurchaseDate
        ,FDateTime& OutExpiration
        ,int32& OutRemainingUses
        ,int32& OutUsesIncrementedBy
        ,FString& OutAnnotation
        ,FString& OutCatalogVersion
        ,FString& OutBundleParent
        ,FString& OutDisplayName
        ,FString& OutUnitCurrency
        ,int32& OutUnitPrice
        ,TArray<FString>& OutBundleContents
	);
	
	UFUNCTION(BlueprintPure, Category = "PlayFab|Server", meta = (NativeBreakFunc))
	static void BreakBPServerListUsersCharactersRequest(
		const FBPServerListUsersCharactersRequest& In
        ,FString& OutPlayFabId
	);
	
	UFUNCTION(BlueprintPure, Category = "PlayFab|Server", meta = (NativeBreakFunc))
	static void BreakBPServerListUsersCharactersResult(
		const FBPServerListUsersCharactersResult& In
        ,TArray<FBPServerCharacterResult>& OutCharacters
	);
	
	UFUNCTION(BlueprintPure, Category = "PlayFab|Server", meta = (NativeBreakFunc))
	static void BreakBPServerLogEventRequest(
		const FBPServerLogEventRequest& In
        ,FString& OutPlayFabId
        ,FString& OutEntityId
        ,FString& OutEntityType
        ,FDateTime& OutTimestamp
        ,FString& OutEventName
        ,bool& OutProfileSetEvent
	);
	
	UFUNCTION(BlueprintPure, Category = "PlayFab|Server", meta = (NativeBreakFunc))
	static void BreakBPServerLogEventResult(
		const FBPServerLogEventResult& In
	);
	
	UFUNCTION(BlueprintPure, Category = "PlayFab|Server", meta = (NativeBreakFunc))
	static void BreakBPServerModifyCharacterVirtualCurrencyResult(
		const FBPServerModifyCharacterVirtualCurrencyResult& In
        ,FString& OutVirtualCurrency
        ,int32& OutBalance
	);
	
	UFUNCTION(BlueprintPure, Category = "PlayFab|Server", meta = (NativeBreakFunc))
	static void BreakBPServerModifyItemUsesRequest(
		const FBPServerModifyItemUsesRequest& In
        ,FString& OutPlayFabId
        ,FString& OutItemInstanceId
        ,int32& OutUsesToAdd
	);
	
	UFUNCTION(BlueprintPure, Category = "PlayFab|Server", meta = (NativeBreakFunc))
	static void BreakBPServerModifyItemUsesResult(
		const FBPServerModifyItemUsesResult& In
        ,FString& OutItemInstanceId
        ,int32& OutRemainingUses
	);
	
	UFUNCTION(BlueprintPure, Category = "PlayFab|Server", meta = (NativeBreakFunc))
	static void BreakBPServerModifyUserVirtualCurrencyResult(
		const FBPServerModifyUserVirtualCurrencyResult& In
        ,FString& OutPlayFabId
        ,FString& OutVirtualCurrency
        ,int32& OutBalanceChange
        ,int32& OutBalance
	);
	
	UFUNCTION(BlueprintPure, Category = "PlayFab|Server", meta = (NativeBreakFunc))
	static void BreakBPServerMoveItemToCharacterFromCharacterRequest(
		const FBPServerMoveItemToCharacterFromCharacterRequest& In
        ,FString& OutPlayFabId
        ,FString& OutGivingCharacterId
        ,FString& OutReceivingCharacterId
        ,FString& OutItemInstanceId
	);
	
	UFUNCTION(BlueprintPure, Category = "PlayFab|Server", meta = (NativeBreakFunc))
	static void BreakBPServerMoveItemToCharacterFromCharacterResult(
		const FBPServerMoveItemToCharacterFromCharacterResult& In
	);
	
	UFUNCTION(BlueprintPure, Category = "PlayFab|Server", meta = (NativeBreakFunc))
	static void BreakBPServerMoveItemToCharacterFromUserRequest(
		const FBPServerMoveItemToCharacterFromUserRequest& In
        ,FString& OutPlayFabId
        ,FString& OutCharacterId
        ,FString& OutItemInstanceId
	);
	
	UFUNCTION(BlueprintPure, Category = "PlayFab|Server", meta = (NativeBreakFunc))
	static void BreakBPServerMoveItemToCharacterFromUserResult(
		const FBPServerMoveItemToCharacterFromUserResult& In
	);
	
	UFUNCTION(BlueprintPure, Category = "PlayFab|Server", meta = (NativeBreakFunc))
	static void BreakBPServerMoveItemToUserFromCharacterRequest(
		const FBPServerMoveItemToUserFromCharacterRequest& In
        ,FString& OutPlayFabId
        ,FString& OutCharacterId
        ,FString& OutItemInstanceId
	);
	
	UFUNCTION(BlueprintPure, Category = "PlayFab|Server", meta = (NativeBreakFunc))
	static void BreakBPServerMoveItemToUserFromCharacterResult(
		const FBPServerMoveItemToUserFromCharacterResult& In
	);
	
	UFUNCTION(BlueprintPure, Category = "PlayFab|Server", meta = (NativeBreakFunc))
	static void BreakBPServerNotifyMatchmakerPlayerLeftRequest(
		const FBPServerNotifyMatchmakerPlayerLeftRequest& In
        ,FString& OutLobbyId
        ,FString& OutPlayFabId
	);
	
	UFUNCTION(BlueprintPure, Category = "PlayFab|Server", meta = (NativeBreakFunc))
	static void BreakBPServerNotifyMatchmakerPlayerLeftResult(
		const FBPServerNotifyMatchmakerPlayerLeftResult& In
	);
	
	UFUNCTION(BlueprintPure, Category = "PlayFab|Server", meta = (NativeBreakFunc))
	static void BreakBPServerPlayerConnectionState(
		const FBPServerPlayerConnectionState& In
	);
	
	UFUNCTION(BlueprintPure, Category = "PlayFab|Server", meta = (NativeBreakFunc))
	static void BreakBPServerPlayerLeaderboardEntry(
		const FBPServerPlayerLeaderboardEntry& In
        ,FString& OutPlayFabId
        ,FString& OutDisplayName
        ,int32& OutStatValue
        ,int32& OutPosition
	);
	
	UFUNCTION(BlueprintPure, Category = "PlayFab|Server", meta = (NativeBreakFunc))
	static void BreakBPServerRedeemCouponRequest(
		const FBPServerRedeemCouponRequest& In
        ,FString& OutCouponCode
        ,FString& OutPlayFabId
        ,FString& OutCatalogVersion
	);
	
	UFUNCTION(BlueprintPure, Category = "PlayFab|Server", meta = (NativeBreakFunc))
	static void BreakBPServerRedeemCouponResult(
		const FBPServerRedeemCouponResult& In
        ,TArray<FBPServerItemInstance>& OutGrantedItems
	);
	
	UFUNCTION(BlueprintPure, Category = "PlayFab|Server", meta = (NativeBreakFunc))
	static void BreakBPServerRedeemMatchmakerTicketRequest(
		const FBPServerRedeemMatchmakerTicketRequest& In
        ,FString& OutTicket
        ,FString& OutLobbyId
	);
	
	UFUNCTION(BlueprintPure, Category = "PlayFab|Server", meta = (NativeBreakFunc))
	static void BreakBPServerRedeemMatchmakerTicketResult(
		const FBPServerRedeemMatchmakerTicketResult& In
        ,bool& OutTicketIsValid
        ,FString& OutError
        ,FBPServerUserAccountInfo& OutUserInfo
	);
	
	UFUNCTION(BlueprintPure, Category = "PlayFab|Server", meta = (NativeBreakFunc))
	static void BreakBPServerRemoveFriendRequest(
		const FBPServerRemoveFriendRequest& In
        ,FString& OutFriendPlayFabId
        ,FString& OutPlayFabId
	);
	
	UFUNCTION(BlueprintPure, Category = "PlayFab|Server", meta = (NativeBreakFunc))
	static void BreakBPServerRemoveSharedGroupMembersRequest(
		const FBPServerRemoveSharedGroupMembersRequest& In
        ,FString& OutSharedGroupId
        ,TArray<FString>& OutPlayFabIds
	);
	
	UFUNCTION(BlueprintPure, Category = "PlayFab|Server", meta = (NativeBreakFunc))
	static void BreakBPServerRemoveSharedGroupMembersResult(
		const FBPServerRemoveSharedGroupMembersResult& In
	);
	
	UFUNCTION(BlueprintPure, Category = "PlayFab|Server", meta = (NativeBreakFunc))
	static void BreakBPServerReportPlayerServerRequest(
		const FBPServerReportPlayerServerRequest& In
        ,FString& OutReporterId
        ,FString& OutReporteeId
        ,FString& OutTitleId
        ,FString& OutComment
	);
	
	UFUNCTION(BlueprintPure, Category = "PlayFab|Server", meta = (NativeBreakFunc))
	static void BreakBPServerReportPlayerServerResult(
		const FBPServerReportPlayerServerResult& In
        ,bool& OutUpdated
        ,int32& OutSubmissionsRemaining
	);
	
	UFUNCTION(BlueprintPure, Category = "PlayFab|Server", meta = (NativeBreakFunc))
	static void BreakBPServerSendPushNotificationRequest(
		const FBPServerSendPushNotificationRequest& In
        ,FString& OutRecipient
        ,FString& OutMessage
        ,FString& OutSubject
	);
	
	UFUNCTION(BlueprintPure, Category = "PlayFab|Server", meta = (NativeBreakFunc))
	static void BreakBPServerSendPushNotificationResult(
		const FBPServerSendPushNotificationResult& In
	);
	
	UFUNCTION(BlueprintPure, Category = "PlayFab|Server", meta = (NativeBreakFunc))
	static void BreakBPServerSetPublisherDataRequest(
		const FBPServerSetPublisherDataRequest& In
        ,FString& OutKey
        ,FString& OutValue
	);
	
	UFUNCTION(BlueprintPure, Category = "PlayFab|Server", meta = (NativeBreakFunc))
	static void BreakBPServerSetPublisherDataResult(
		const FBPServerSetPublisherDataResult& In
	);
	
	UFUNCTION(BlueprintPure, Category = "PlayFab|Server", meta = (NativeBreakFunc))
	static void BreakBPServerSetTitleDataRequest(
		const FBPServerSetTitleDataRequest& In
        ,FString& OutKey
        ,FString& OutValue
	);
	
	UFUNCTION(BlueprintPure, Category = "PlayFab|Server", meta = (NativeBreakFunc))
	static void BreakBPServerSetTitleDataResult(
		const FBPServerSetTitleDataResult& In
	);
	
	UFUNCTION(BlueprintPure, Category = "PlayFab|Server", meta = (NativeBreakFunc))
	static void BreakBPServerSharedGroupDataRecord(
		const FBPServerSharedGroupDataRecord& In
        ,FString& OutValue
        ,FString& OutLastUpdatedBy
        ,FDateTime& OutLastUpdated
	);
	
	UFUNCTION(BlueprintPure, Category = "PlayFab|Server", meta = (NativeBreakFunc))
	static void BreakBPServerSubtractCharacterVirtualCurrencyRequest(
		const FBPServerSubtractCharacterVirtualCurrencyRequest& In
        ,FString& OutPlayFabId
        ,FString& OutCharacterId
        ,FString& OutVirtualCurrency
        ,int32& OutAmount
	);
	
	UFUNCTION(BlueprintPure, Category = "PlayFab|Server", meta = (NativeBreakFunc))
	static void BreakBPServerSubtractUserVirtualCurrencyRequest(
		const FBPServerSubtractUserVirtualCurrencyRequest& In
        ,FString& OutPlayFabId
        ,FString& OutVirtualCurrency
        ,int32& OutAmount
	);
	
	UFUNCTION(BlueprintPure, Category = "PlayFab|Server", meta = (NativeBreakFunc))
	static void BreakBPServerTitleActivationStatus(
		const FBPServerTitleActivationStatus& In
	);
	
	UFUNCTION(BlueprintPure, Category = "PlayFab|Server", meta = (NativeBreakFunc))
	static void BreakBPServerTitleNewsItem(
		const FBPServerTitleNewsItem& In
        ,FDateTime& OutTimestamp
        ,FString& OutNewsId
        ,FString& OutTitle
        ,FString& OutBody
	);
	
	UFUNCTION(BlueprintPure, Category = "PlayFab|Server", meta = (NativeBreakFunc))
	static void BreakBPServerUpdateCharacterDataRequest(
		const FBPServerUpdateCharacterDataRequest& In
        ,FString& OutPlayFabId
        ,FString& OutCharacterId
        ,TArray<FString>& OutKeysToRemove
	);
	
	UFUNCTION(BlueprintPure, Category = "PlayFab|Server", meta = (NativeBreakFunc))
	static void BreakBPServerUpdateCharacterDataResult(
		const FBPServerUpdateCharacterDataResult& In
        ,int32& OutDataVersion
	);
	
	UFUNCTION(BlueprintPure, Category = "PlayFab|Server", meta = (NativeBreakFunc))
	static void BreakBPServerUpdateCharacterStatisticsRequest(
		const FBPServerUpdateCharacterStatisticsRequest& In
        ,FString& OutPlayFabId
        ,FString& OutCharacterId
	);
	
	UFUNCTION(BlueprintPure, Category = "PlayFab|Server", meta = (NativeBreakFunc))
	static void BreakBPServerUpdateCharacterStatisticsResult(
		const FBPServerUpdateCharacterStatisticsResult& In
	);
	
	UFUNCTION(BlueprintPure, Category = "PlayFab|Server", meta = (NativeBreakFunc))
	static void BreakBPServerUpdateSharedGroupDataRequest(
		const FBPServerUpdateSharedGroupDataRequest& In
        ,FString& OutSharedGroupId
        ,TArray<FString>& OutKeysToRemove
	);
	
	UFUNCTION(BlueprintPure, Category = "PlayFab|Server", meta = (NativeBreakFunc))
	static void BreakBPServerUpdateSharedGroupDataResult(
		const FBPServerUpdateSharedGroupDataResult& In
	);
	
	UFUNCTION(BlueprintPure, Category = "PlayFab|Server", meta = (NativeBreakFunc))
	static void BreakBPServerUpdateUserDataRequest(
		const FBPServerUpdateUserDataRequest& In
        ,FString& OutPlayFabId
        ,TArray<FString>& OutKeysToRemove
	);
	
	UFUNCTION(BlueprintPure, Category = "PlayFab|Server", meta = (NativeBreakFunc))
	static void BreakBPServerUpdateUserDataResult(
		const FBPServerUpdateUserDataResult& In
        ,int32& OutDataVersion
	);
	
	UFUNCTION(BlueprintPure, Category = "PlayFab|Server", meta = (NativeBreakFunc))
	static void BreakBPServerUpdateUserInternalDataRequest(
		const FBPServerUpdateUserInternalDataRequest& In
        ,FString& OutPlayFabId
        ,TArray<FString>& OutKeysToRemove
	);
	
	UFUNCTION(BlueprintPure, Category = "PlayFab|Server", meta = (NativeBreakFunc))
	static void BreakBPServerUpdateUserInventoryItemDataRequest(
		const FBPServerUpdateUserInventoryItemDataRequest& In
        ,FString& OutCharacterId
        ,FString& OutPlayFabId
        ,FString& OutItemInstanceId
        ,TArray<FString>& OutKeysToRemove
	);
	
	UFUNCTION(BlueprintPure, Category = "PlayFab|Server", meta = (NativeBreakFunc))
	static void BreakBPServerUpdateUserInventoryItemDataResult(
		const FBPServerUpdateUserInventoryItemDataResult& In
	);
	
	UFUNCTION(BlueprintPure, Category = "PlayFab|Server", meta = (NativeBreakFunc))
	static void BreakBPServerUpdateUserStatisticsRequest(
		const FBPServerUpdateUserStatisticsRequest& In
        ,FString& OutPlayFabId
	);
	
	UFUNCTION(BlueprintPure, Category = "PlayFab|Server", meta = (NativeBreakFunc))
	static void BreakBPServerUpdateUserStatisticsResult(
		const FBPServerUpdateUserStatisticsResult& In
	);
	
	UFUNCTION(BlueprintPure, Category = "PlayFab|Server", meta = (NativeBreakFunc))
	static void BreakBPServerUserAccountInfo(
		const FBPServerUserAccountInfo& In
        ,FString& OutPlayFabId
        ,FDateTime& OutCreated
        ,FString& OutUsername
        ,FBPServerUserTitleInfo& OutTitleInfo
        ,FBPServerUserPrivateAccountInfo& OutPrivateInfo
        ,FBPServerUserFacebookInfo& OutFacebookInfo
        ,FBPServerUserSteamInfo& OutSteamInfo
        ,FBPServerUserGameCenterInfo& OutGameCenterInfo
	);
	
	UFUNCTION(BlueprintPure, Category = "PlayFab|Server", meta = (NativeBreakFunc))
	static void BreakBPServerUserDataPermission(
		const FBPServerUserDataPermission& In
	);
	
	UFUNCTION(BlueprintPure, Category = "PlayFab|Server", meta = (NativeBreakFunc))
	static void BreakBPServerUserDataRecord(
		const FBPServerUserDataRecord& In
        ,FString& OutValue
        ,FDateTime& OutLastUpdated
	);
	
	UFUNCTION(BlueprintPure, Category = "PlayFab|Server", meta = (NativeBreakFunc))
	static void BreakBPServerUserFacebookInfo(
		const FBPServerUserFacebookInfo& In
        ,FString& OutFacebookId
        ,FString& OutFullName
	);
	
	UFUNCTION(BlueprintPure, Category = "PlayFab|Server", meta = (NativeBreakFunc))
	static void BreakBPServerUserGameCenterInfo(
		const FBPServerUserGameCenterInfo& In
        ,FString& OutGameCenterId
	);
	
	UFUNCTION(BlueprintPure, Category = "PlayFab|Server", meta = (NativeBreakFunc))
	static void BreakBPServerUserOrigination(
		const FBPServerUserOrigination& In
	);
	
	UFUNCTION(BlueprintPure, Category = "PlayFab|Server", meta = (NativeBreakFunc))
	static void BreakBPServerUserPrivateAccountInfo(
		const FBPServerUserPrivateAccountInfo& In
        ,FString& OutEmail
	);
	
	UFUNCTION(BlueprintPure, Category = "PlayFab|Server", meta = (NativeBreakFunc))
	static void BreakBPServerUserSteamInfo(
		const FBPServerUserSteamInfo& In
        ,FString& OutSteamId
        ,FString& OutSteamCountry
	);
	
	UFUNCTION(BlueprintPure, Category = "PlayFab|Server", meta = (NativeBreakFunc))
	static void BreakBPServerUserTitleInfo(
		const FBPServerUserTitleInfo& In
        ,FString& OutDisplayName
        ,FDateTime& OutCreated
        ,FDateTime& OutLastLogin
        ,FDateTime& OutFirstLogin
        ,bool& OutisBanned
	);
	
	UFUNCTION(BlueprintPure, Category = "PlayFab|Server", meta = (NativeBreakFunc))
	static void BreakBPServerVirtualCurrencyRechargeTime(
		const FBPServerVirtualCurrencyRechargeTime& In
        ,int32& OutSecondsToRecharge
        ,FDateTime& OutRechargeTime
        ,int32& OutRechargeMax
	);
	


};