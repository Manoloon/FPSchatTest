// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "StreamChatClientComponent.h"
#include "VivoxCore.h"
#include "ChatHud.generated.h"

UCLASS()
class FPSCHATTEST_API AChatHud : public AHUD
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadOnly,EditAnywhere)
	FString OwnKey =	TEXT("pjz4d6xcusgr");
	UPROPERTY(BlueprintReadOnly,EditAnywhere)
	FString TestKey =	TEXT("kmajgxb2rk4p");
	UPROPERTY(BlueprintReadOnly,EditAnywhere)
	FString User1Token = TEXT("eyJhbGciOiJIUzI1NiIsInR5cCI6IkpXVCJ9.eyJ1c2VyX2lkIjoiODZkMjRkNzUtNjM3Ny00MDU1LTljZWEtNTEwNjg2YzcwZTBkIn0.FMtPFzFW7UbGFa8I7zHv_PF5gsYfTGYZJUL7RIZ28i4");
	UPROPERTY(BlueprintReadOnly,EditAnywhere)
	FUser User1{TEXT("86d24d75-6377-4055-9cea-510686c70e0d")};
	UPROPERTY(BlueprintReadOnly,EditAnywhere)
	FString User2Token = TEXT("eyJhbGciOiJIUzI1NiIsInR5cCI6IkpXVCJ9.eyJ1c2VyX2lkIjoiYjk4ODVjMTgtMzVjYS00ZThlLWI1YTktNThmNDZlZDI4ZTVhIn0.-CVS6l_W-jVcqJLBxiN9KOQD4qjQ7DorfTebFUx1Ch8");
	UPROPERTY(BlueprintReadOnly,EditAnywhere)
	FUser User2{TEXT("dave")};
	UPROPERTY(EditAnywhere,Category = "Settings")
	bool bUseOwnApiKey=false;
	AChatHud();
	UPROPERTY(BlueprintReadOnly,EditAnywhere)
	TObjectPtr<UStreamChatClientComponent> StreamChatComp;
	UPROPERTY(BlueprintReadWrite, meta = (AllowPrivateAccess))
	TArray<UChatChannel*> Channels;
	virtual void BeginPlay() override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
	virtual  void PostInitProperties() override;
	UFUNCTION(BlueprintImplementableEvent)
	void OnConnect();
};
