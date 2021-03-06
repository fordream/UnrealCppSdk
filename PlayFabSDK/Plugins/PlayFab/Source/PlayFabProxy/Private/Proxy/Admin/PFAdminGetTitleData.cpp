// This is automatically generated by PlayFab SDKGenerator. DO NOT modify this manually!
#include "PlayFabProxyPrivatePCH.h"
#include "PFAdminGetTitleData.h"

UPFAdminGetTitleData::UPFAdminGetTitleData(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
	, SuccessDelegate(PlayFab::UPlayFabAdminAPI::FGetTitleDataDelegate::CreateUObject(this, &ThisClass::OnSuccessCallback))
	, ErrorDelegate(PlayFab::FPlayFabErrorDelegate::CreateUObject(this, &ThisClass::OnErrorCallback))
{
}

UPFAdminGetTitleData* UPFAdminGetTitleData::GetTitleData(UObject* WorldContextObject, class APlayerController* PlayerController , const TArray<FString>& InKeys)
{
	UPFAdminGetTitleData* Proxy = NewObject<UPFAdminGetTitleData>();
 	//Proxy->PlayerControllerWeakPtr = PlayerController;
	Proxy->Request.Keys = InKeys;
	

 	//Proxy->WorldContextObject = WorldContextObject;
	return Proxy;
}

void UPFAdminGetTitleData::Activate()
{
	// grab the module, so we can get a valid pointer to the client API 
	PlayFabAdminPtr AdminAPI = IPlayFabModuleInterface::Get().GetAdminAPI();

	bool CallResult = false;

	if(AdminAPI.IsValid())
	{	
		CallResult = AdminAPI->GetTitleData(Request, SuccessDelegate, ErrorDelegate);
	}

	if(CallResult == false)
	{
		FBPAdminGetTitleDataResult BPResult;
 		OnFailure.Broadcast(BPResult);
	}
}


//////////////////////////////////////////////////////////////////////////
// Delegate handles
void UPFAdminGetTitleData::OnSuccessCallback(const PlayFab::AdminModels::FGetTitleDataResult& Result)
{
	FBPAdminGetTitleDataResult BPResult;
 	BPResult.Data = Result;
 	OnSuccess.Broadcast(BPResult);
}

void UPFAdminGetTitleData::OnErrorCallback(const PlayFab::FPlayFabError& InError)
{
	FBPAdminGetTitleDataResult BPResult;
 	OnFailure.Broadcast(BPResult);	
}
