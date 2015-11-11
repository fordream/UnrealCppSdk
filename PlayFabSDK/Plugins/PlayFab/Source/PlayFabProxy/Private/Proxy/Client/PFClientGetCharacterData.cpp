// This is automatically generated by PlayFab SDKGenerator. DO NOT modify this manually!
#include "PlayFabProxyPrivatePCH.h"
#include "PFClientGetCharacterData.h"

UPFClientGetCharacterData::UPFClientGetCharacterData(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
	, SuccessDelegate(PlayFab::UPlayFabClientAPI::FGetCharacterDataDelegate::CreateUObject(this, &ThisClass::OnSuccessCallback))
	, ErrorDelegate(PlayFab::FPlayFabErrorDelegate::CreateUObject(this, &ThisClass::OnErrorCallback))
{
}

UPFClientGetCharacterData* UPFClientGetCharacterData::GetCharacterData(UObject* WorldContextObject, class APlayerController* PlayerController , const FString& InPlayFabId, const FString& InCharacterId, const TArray<FString>& InKeys, const int32& InIfChangedFromDataVersion)
{
	UPFClientGetCharacterData* Proxy = NewObject<UPFClientGetCharacterData>();
 	//Proxy->PlayerControllerWeakPtr = PlayerController;
	Proxy->Request.PlayFabId = InPlayFabId;
	Proxy->Request.CharacterId = InCharacterId;
	Proxy->Request.Keys = InKeys;
	Proxy->Request.IfChangedFromDataVersion = InIfChangedFromDataVersion;
	

 	//Proxy->WorldContextObject = WorldContextObject;
	return Proxy;
}

void UPFClientGetCharacterData::Activate()
{
	// grab the module, so we can get a valid pointer to the client API 
	PlayFabClientPtr ClientAPI = IPlayFabModuleInterface::Get().GetClientAPI();

	bool CallResult = false;

	if(ClientAPI.IsValid())
	{	
		CallResult = ClientAPI->GetCharacterData(Request, SuccessDelegate, ErrorDelegate);
	}

	if(CallResult == false)
	{
		FBPClientGetCharacterDataResult BPResult;
 		OnFailure.Broadcast(BPResult);
	}
}


//////////////////////////////////////////////////////////////////////////
// Delegate handles
void UPFClientGetCharacterData::OnSuccessCallback(const PlayFab::ClientModels::FGetCharacterDataResult& Result)
{
	FBPClientGetCharacterDataResult BPResult;
 	BPResult.Data = Result;
 	OnSuccess.Broadcast(BPResult);
}

void UPFClientGetCharacterData::OnErrorCallback(const PlayFab::FPlayFabError& InError)
{
	FBPClientGetCharacterDataResult BPResult;
 	OnFailure.Broadcast(BPResult);	
}