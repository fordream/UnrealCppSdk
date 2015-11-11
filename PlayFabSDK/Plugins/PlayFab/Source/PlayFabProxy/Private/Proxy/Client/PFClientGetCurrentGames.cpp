// This is automatically generated by PlayFab SDKGenerator. DO NOT modify this manually!
#include "PlayFabProxyPrivatePCH.h"
#include "PFClientGetCurrentGames.h"

UPFClientGetCurrentGames::UPFClientGetCurrentGames(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
	, SuccessDelegate(PlayFab::UPlayFabClientAPI::FGetCurrentGamesDelegate::CreateUObject(this, &ThisClass::OnSuccessCallback))
	, ErrorDelegate(PlayFab::FPlayFabErrorDelegate::CreateUObject(this, &ThisClass::OnErrorCallback))
{
}

UPFClientGetCurrentGames* UPFClientGetCurrentGames::GetCurrentGames(UObject* WorldContextObject, class APlayerController* PlayerController , const FString& InBuildVersion, const FString& InGameMode, const FString& InStatisticName)
{
	UPFClientGetCurrentGames* Proxy = NewObject<UPFClientGetCurrentGames>();
 	//Proxy->PlayerControllerWeakPtr = PlayerController;
	
	Proxy->Request.BuildVersion = InBuildVersion;
	Proxy->Request.GameMode = InGameMode;
	Proxy->Request.StatisticName = InStatisticName;
	

 	//Proxy->WorldContextObject = WorldContextObject;
	return Proxy;
}

void UPFClientGetCurrentGames::Activate()
{
	// grab the module, so we can get a valid pointer to the client API 
	PlayFabClientPtr ClientAPI = IPlayFabModuleInterface::Get().GetClientAPI();

	bool CallResult = false;

	if(ClientAPI.IsValid())
	{	
		CallResult = ClientAPI->GetCurrentGames(Request, SuccessDelegate, ErrorDelegate);
	}

	if(CallResult == false)
	{
		FBPClientCurrentGamesResult BPResult;
 		OnFailure.Broadcast(BPResult);
	}
}


//////////////////////////////////////////////////////////////////////////
// Delegate handles
void UPFClientGetCurrentGames::OnSuccessCallback(const PlayFab::ClientModels::FCurrentGamesResult& Result)
{
	FBPClientCurrentGamesResult BPResult;
 	BPResult.Data = Result;
 	OnSuccess.Broadcast(BPResult);
}

void UPFClientGetCurrentGames::OnErrorCallback(const PlayFab::FPlayFabError& InError)
{
	FBPClientCurrentGamesResult BPResult;
 	OnFailure.Broadcast(BPResult);	
}