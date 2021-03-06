// This is automatically generated by PlayFab SDKGenerator. DO NOT modify this manually!
#include "PlayFabProxyPrivatePCH.h"
#include "PFClientRemoveFriend.h"

UPFClientRemoveFriend::UPFClientRemoveFriend(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
	, SuccessDelegate(PlayFab::UPlayFabClientAPI::FRemoveFriendDelegate::CreateUObject(this, &ThisClass::OnSuccessCallback))
	, ErrorDelegate(PlayFab::FPlayFabErrorDelegate::CreateUObject(this, &ThisClass::OnErrorCallback))
{
}

UPFClientRemoveFriend* UPFClientRemoveFriend::RemoveFriend(UObject* WorldContextObject, class APlayerController* PlayerController , const FString& InFriendPlayFabId)
{
	UPFClientRemoveFriend* Proxy = NewObject<UPFClientRemoveFriend>();
 	//Proxy->PlayerControllerWeakPtr = PlayerController;
	Proxy->Request.FriendPlayFabId = InFriendPlayFabId;
	

 	//Proxy->WorldContextObject = WorldContextObject;
	return Proxy;
}

void UPFClientRemoveFriend::Activate()
{
	// grab the module, so we can get a valid pointer to the client API 
	PlayFabClientPtr ClientAPI = IPlayFabModuleInterface::Get().GetClientAPI();

	bool CallResult = false;

	if(ClientAPI.IsValid())
	{	
		CallResult = ClientAPI->RemoveFriend(Request, SuccessDelegate, ErrorDelegate);
	}

	if(CallResult == false)
	{
		OnFailure.Broadcast();
	}
}


//////////////////////////////////////////////////////////////////////////
// Delegate handles
void UPFClientRemoveFriend::OnSuccessCallback(const PlayFab::ClientModels::FRemoveFriendResult& Result)
{
	OnSuccess.Broadcast();
}

void UPFClientRemoveFriend::OnErrorCallback(const PlayFab::FPlayFabError& InError)
{
	OnFailure.Broadcast();	
}
