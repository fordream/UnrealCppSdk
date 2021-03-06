// This is automatically generated by PlayFab SDKGenerator. DO NOT modify this manually!
#include "PlayFabProxyPrivatePCH.h"
#include "PFServerGetContentDownloadUrl.h"

UPFServerGetContentDownloadUrl::UPFServerGetContentDownloadUrl(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
	, SuccessDelegate(PlayFab::UPlayFabServerAPI::FGetContentDownloadUrlDelegate::CreateUObject(this, &ThisClass::OnSuccessCallback))
	, ErrorDelegate(PlayFab::FPlayFabErrorDelegate::CreateUObject(this, &ThisClass::OnErrorCallback))
{
}

UPFServerGetContentDownloadUrl* UPFServerGetContentDownloadUrl::GetContentDownloadUrl(UObject* WorldContextObject, class APlayerController* PlayerController , const FString& InKey, const FString& InHttpMethod, const bool& InThruCDN)
{
	UPFServerGetContentDownloadUrl* Proxy = NewObject<UPFServerGetContentDownloadUrl>();
 	//Proxy->PlayerControllerWeakPtr = PlayerController;
	Proxy->Request.Key = InKey;
	Proxy->Request.HttpMethod = InHttpMethod;
	Proxy->Request.ThruCDN = InThruCDN;
	

 	//Proxy->WorldContextObject = WorldContextObject;
	return Proxy;
}

void UPFServerGetContentDownloadUrl::Activate()
{
	// grab the module, so we can get a valid pointer to the client API 
	PlayFabServerPtr ServerAPI = IPlayFabModuleInterface::Get().GetServerAPI();

	bool CallResult = false;

	if(ServerAPI.IsValid())
	{	
		CallResult = ServerAPI->GetContentDownloadUrl(Request, SuccessDelegate, ErrorDelegate);
	}

	if(CallResult == false)
	{
		FBPServerGetContentDownloadUrlResult BPResult;
 		OnFailure.Broadcast(BPResult);
	}
}


//////////////////////////////////////////////////////////////////////////
// Delegate handles
void UPFServerGetContentDownloadUrl::OnSuccessCallback(const PlayFab::ServerModels::FGetContentDownloadUrlResult& Result)
{
	FBPServerGetContentDownloadUrlResult BPResult;
 	BPResult.Data = Result;
 	OnSuccess.Broadcast(BPResult);
}

void UPFServerGetContentDownloadUrl::OnErrorCallback(const PlayFab::FPlayFabError& InError)
{
	FBPServerGetContentDownloadUrlResult BPResult;
 	OnFailure.Broadcast(BPResult);	
}
