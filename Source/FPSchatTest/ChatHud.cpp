// Fill out your copyright notice in the Description page of Project Settings.


#include "ChatHud.h"

AChatHud::AChatHud()
{
	StreamChatComp = CreateDefaultSubobject<UStreamChatClientComponent>(TEXT("StreamChatComp"));
}

void AChatHud::BeginPlay()
{
	Super::BeginPlay();
	/*
	User2.Role = TEXT("anonymous");
	StreamChatComp->ConnectUser(
		User2,
		StreamChatComp->DevToken(User2.Id),
		[WeakThis = TWeakObjectPtr<AChatHud>(this)](const FOwnUser& OwnUser)
		{
			const FFilter Filter = FFilter::In(TEXT("members"), {OwnUser.User->Id});
			WeakThis->StreamChatComp->QueryChannels(
				Filter,
				{{EChannelSortField::LastMessageAt, ESortDirection::Descending}},
				EChannelFlags::State | EChannelFlags::Watch,
				{},
				[WeakThis](const TArray<UChatChannel*> ReceivedChannels)
				{
					WeakThis->Channels = ReceivedChannels;
					WeakThis->OnConnect();
				});
		});
	//OnConnect();*/
}

void AChatHud::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);
	StreamChatComp->DisconnectUser();
}

void AChatHud::PostInitProperties()
{
	Super::PostInitProperties();
	StreamChatComp->ApiKey = bUseOwnApiKey ? OwnKey : TestKey;
}
