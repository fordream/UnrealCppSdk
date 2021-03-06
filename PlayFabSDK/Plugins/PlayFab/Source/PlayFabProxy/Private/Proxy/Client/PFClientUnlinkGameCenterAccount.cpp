// This is automatically generated by PlayFab SDKGenerator. DO NOT modify this manually!
#include "PlayFabProxyPrivatePCH.h"
#include "PFClientUnlinkGameCenterAccount.h"

UPFClientUnlinkGameCenterAccount::UPFClientUnlinkGameCenterAccount(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
	, SuccessDelegate(PlayFab::UPlayFabClientAPI::FUnlinkGameCenterAccountDelegate::CreateUObject(this, &ThisClass::OnSuccessCallback))
	, ErrorDelegate(PlayFab::FPlayFabErrorDelegate::CreateUObject(this, &ThisClass::OnErrorCallback))
{
}

UPFClientUnlinkGameCenterAccount* UPFClientUnlinkGameCenterAccount::UnlinkGameCenterAccount(UObject* WorldContextObject, class APlayerController* PlayerController )
{
	UPFClientUnlinkGameCenterAccount* Proxy = NewObject<UPFClientUnlinkGameCenterAccount>();
 	//Proxy->PlayerControllerWeakPtr = PlayerController;
	

 	//Proxy->WorldContextObject = WorldContextObject;
	return Proxy;
}

void UPFClientUnlinkGameCenterAccount::Activate()
{
	// grab the module, so we can get a valid pointer to the client API 
	PlayFabClientPtr ClientAPI = IPlayFabModuleInterface::Get().GetClientAPI();

	bool CallResult = false;

	if(ClientAPI.IsValid())
	{	
		CallResult = ClientAPI->UnlinkGameCenterAccount(SuccessDelegate, ErrorDelegate);
	}

	if(CallResult == false)
	{
		OnFailure.Broadcast();
	}
}


//////////////////////////////////////////////////////////////////////////
// Delegate handles
void UPFClientUnlinkGameCenterAccount::OnSuccessCallback(const PlayFab::ClientModels::FUnlinkGameCenterAccountResult& Result)
{
	OnSuccess.Broadcast();
}

void UPFClientUnlinkGameCenterAccount::OnErrorCallback(const PlayFab::FPlayFabError& InError)
{
	OnFailure.Broadcast();	
}
