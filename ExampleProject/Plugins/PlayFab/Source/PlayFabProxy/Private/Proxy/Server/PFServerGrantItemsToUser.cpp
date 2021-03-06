// This is automatically generated by PlayFab SDKGenerator. DO NOT modify this manually!
#include "PlayFabProxyPrivatePCH.h"
#include "PFServerGrantItemsToUser.h"

UPFServerGrantItemsToUser::UPFServerGrantItemsToUser(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
	, SuccessDelegate(PlayFab::UPlayFabServerAPI::FGrantItemsToUserDelegate::CreateUObject(this, &ThisClass::OnSuccessCallback))
	, ErrorDelegate(PlayFab::FPlayFabErrorDelegate::CreateUObject(this, &ThisClass::OnErrorCallback))
{
}

UPFServerGrantItemsToUser* UPFServerGrantItemsToUser::GrantItemsToUser(UObject* WorldContextObject, class APlayerController* PlayerController , const FString& InCatalogVersion, const FString& InPlayFabId, const FString& InAnnotation, const TArray<FString>& InItemIds)
{
	UPFServerGrantItemsToUser* Proxy = NewObject<UPFServerGrantItemsToUser>();
 	//Proxy->PlayerControllerWeakPtr = PlayerController;
	Proxy->Request.CatalogVersion = InCatalogVersion;
	Proxy->Request.PlayFabId = InPlayFabId;
	Proxy->Request.Annotation = InAnnotation;
	Proxy->Request.ItemIds = InItemIds;
	

 	//Proxy->WorldContextObject = WorldContextObject;
	return Proxy;
}

void UPFServerGrantItemsToUser::Activate()
{
	// grab the module, so we can get a valid pointer to the client API 
	PlayFabServerPtr ServerAPI = IPlayFabModuleInterface::Get().GetServerAPI();

	bool CallResult = false;

	if(ServerAPI.IsValid())
	{	
		CallResult = ServerAPI->GrantItemsToUser(Request, SuccessDelegate, ErrorDelegate);
	}

	if(CallResult == false)
	{
		FBPServerGrantItemsToUserResult BPResult;
 		OnFailure.Broadcast(BPResult);
	}
}


//////////////////////////////////////////////////////////////////////////
// Delegate handles
void UPFServerGrantItemsToUser::OnSuccessCallback(const PlayFab::ServerModels::FGrantItemsToUserResult& Result)
{
	FBPServerGrantItemsToUserResult BPResult;
 	BPResult.Data = Result;
 	OnSuccess.Broadcast(BPResult);
}

void UPFServerGrantItemsToUser::OnErrorCallback(const PlayFab::FPlayFabError& InError)
{
	FBPServerGrantItemsToUserResult BPResult;
 	OnFailure.Broadcast(BPResult);	
}
