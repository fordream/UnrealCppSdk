// This is automatically generated by PlayFab SDKGenerator. DO NOT modify this manually!
#include "PlayFabProxyPrivatePCH.h"
#include "PFClientGetUserPublisherData.h"

UPFClientGetUserPublisherData::UPFClientGetUserPublisherData(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
	, SuccessDelegate(PlayFab::UPlayFabClientAPI::FGetUserPublisherDataDelegate::CreateUObject(this, &ThisClass::OnSuccessCallback))
	, ErrorDelegate(PlayFab::FPlayFabErrorDelegate::CreateUObject(this, &ThisClass::OnErrorCallback))
{
}

UPFClientGetUserPublisherData* UPFClientGetUserPublisherData::GetUserPublisherData(UObject* WorldContextObject, class APlayerController* PlayerController , const TArray<FString>& InKeys, const FString& InPlayFabId, const int32& InIfChangedFromDataVersion)
{
	UPFClientGetUserPublisherData* Proxy = NewObject<UPFClientGetUserPublisherData>();
 	//Proxy->PlayerControllerWeakPtr = PlayerController;
	Proxy->Request.Keys = InKeys;
	Proxy->Request.PlayFabId = InPlayFabId;
	Proxy->Request.IfChangedFromDataVersion = InIfChangedFromDataVersion;
	

 	//Proxy->WorldContextObject = WorldContextObject;
	return Proxy;
}

void UPFClientGetUserPublisherData::Activate()
{
	// grab the module, so we can get a valid pointer to the client API 
	PlayFabClientPtr ClientAPI = IPlayFabModuleInterface::Get().GetClientAPI();

	bool CallResult = false;

	if(ClientAPI.IsValid())
	{	
		CallResult = ClientAPI->GetUserPublisherData(Request, SuccessDelegate, ErrorDelegate);
	}

	if(CallResult == false)
	{
		FBPClientGetUserDataResult BPResult;
 		OnFailure.Broadcast(BPResult);
	}
}


//////////////////////////////////////////////////////////////////////////
// Delegate handles
void UPFClientGetUserPublisherData::OnSuccessCallback(const PlayFab::ClientModels::FGetUserDataResult& Result)
{
	FBPClientGetUserDataResult BPResult;
 	BPResult.Data = Result;
 	OnSuccess.Broadcast(BPResult);
}

void UPFClientGetUserPublisherData::OnErrorCallback(const PlayFab::FPlayFabError& InError)
{
	FBPClientGetUserDataResult BPResult;
 	OnFailure.Broadcast(BPResult);	
}
