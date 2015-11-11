// This is automatically generated by PlayFab SDKGenerator. DO NOT modify this manually!
#include "PlayFabProxyPrivatePCH.h"
#include "PFAdminGrantItemsToUsers.h"

UPFAdminGrantItemsToUsers::UPFAdminGrantItemsToUsers(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
	, SuccessDelegate(PlayFab::UPlayFabAdminAPI::FGrantItemsToUsersDelegate::CreateUObject(this, &ThisClass::OnSuccessCallback))
	, ErrorDelegate(PlayFab::FPlayFabErrorDelegate::CreateUObject(this, &ThisClass::OnErrorCallback))
{
}

UPFAdminGrantItemsToUsers* UPFAdminGrantItemsToUsers::GrantItemsToUsers(UObject* WorldContextObject, class APlayerController* PlayerController , const FString& InCatalogVersion, const TArray<FBPAdminItemGrant>& InItemGrants)
{
	UPFAdminGrantItemsToUsers* Proxy = NewObject<UPFAdminGrantItemsToUsers>();
 	//Proxy->PlayerControllerWeakPtr = PlayerController;
	Proxy->Request.CatalogVersion = InCatalogVersion;
	for (const FBPAdminItemGrant& elem : InItemGrants)
    {
        Proxy->Request.ItemGrants.Add(elem.Data);
    }

	

 	//Proxy->WorldContextObject = WorldContextObject;
	return Proxy;
}

void UPFAdminGrantItemsToUsers::Activate()
{
	// grab the module, so we can get a valid pointer to the client API 
	PlayFabAdminPtr AdminAPI = IPlayFabModuleInterface::Get().GetAdminAPI();

	bool CallResult = false;

	if(AdminAPI.IsValid())
	{	
		CallResult = AdminAPI->GrantItemsToUsers(Request, SuccessDelegate, ErrorDelegate);
	}

	if(CallResult == false)
	{
		FBPAdminGrantItemsToUsersResult BPResult;
 		OnFailure.Broadcast(BPResult);
	}
}


//////////////////////////////////////////////////////////////////////////
// Delegate handles
void UPFAdminGrantItemsToUsers::OnSuccessCallback(const PlayFab::AdminModels::FGrantItemsToUsersResult& Result)
{
	FBPAdminGrantItemsToUsersResult BPResult;
 	BPResult.Data = Result;
 	OnSuccess.Broadcast(BPResult);
}

void UPFAdminGrantItemsToUsers::OnErrorCallback(const PlayFab::FPlayFabError& InError)
{
	FBPAdminGrantItemsToUsersResult BPResult;
 	OnFailure.Broadcast(BPResult);	
}