// This is automatically generated by PlayFab SDKGenerator. DO NOT modify this manually!
#include "PlayFabProxyPrivatePCH.h"
#include "PFClientLinkGameCenterAccount.h"

UPFClientLinkGameCenterAccount::UPFClientLinkGameCenterAccount(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
	, SuccessDelegate(PlayFab::UPlayFabClientAPI::FLinkGameCenterAccountDelegate::CreateUObject(this, &ThisClass::OnSuccessCallback))
	, ErrorDelegate(PlayFab::FPlayFabErrorDelegate::CreateUObject(this, &ThisClass::OnErrorCallback))
{
}

UPFClientLinkGameCenterAccount* UPFClientLinkGameCenterAccount::LinkGameCenterAccount(UObject* WorldContextObject, class APlayerController* PlayerController , const FString& InGameCenterId)
{
	UPFClientLinkGameCenterAccount* Proxy = NewObject<UPFClientLinkGameCenterAccount>();
 	//Proxy->PlayerControllerWeakPtr = PlayerController;
	Proxy->Request.GameCenterId = InGameCenterId;
	

 	//Proxy->WorldContextObject = WorldContextObject;
	return Proxy;
}

void UPFClientLinkGameCenterAccount::Activate()
{
	// grab the module, so we can get a valid pointer to the client API 
	PlayFabClientPtr ClientAPI = IPlayFabModuleInterface::Get().GetClientAPI();

	bool CallResult = false;

	if(ClientAPI.IsValid())
	{	
		CallResult = ClientAPI->LinkGameCenterAccount(Request, SuccessDelegate, ErrorDelegate);
	}

	if(CallResult == false)
	{
		OnFailure.Broadcast();
	}
}


//////////////////////////////////////////////////////////////////////////
// Delegate handles
void UPFClientLinkGameCenterAccount::OnSuccessCallback(const PlayFab::ClientModels::FLinkGameCenterAccountResult& Result)
{
	OnSuccess.Broadcast();
}

void UPFClientLinkGameCenterAccount::OnErrorCallback(const PlayFab::FPlayFabError& InError)
{
	OnFailure.Broadcast();	
}
