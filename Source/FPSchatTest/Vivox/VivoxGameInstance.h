// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
/*
#include "CoreMinimal.h"
#include "VivoxCore/Public/VivoxCore.h"
#include "VivoxGameInstance.generated.h"


template<class T>
class CachedProperty
{
public:
	explicit CachedProperty(T value) {
		m_dirty = false;
		m_value = value;
	}

	const T &GetValue() const {
		return m_value;
	}

	void SetValue(const T &value) {
		if(m_value != value) {
			m_value = value;
			m_dirty = true;
		}
	}

	void SetDirty(bool value) {
		m_dirty = value;
	}

	bool IsDirty() const {
		return m_dirty;
	}
protected:
	bool m_dirty;
	T m_value;
};

UENUM(BlueprintType)
enum class PTTKey : uint8
{
	PTTNoChannel,
	PTTAreaChannel,
	PTTTeamChannel
};

UCLASS()
class FPSCHATTEST_API UVivoxGameInstance : public UGameInstance
{
	GENERATED_BODY()

public:
	virtual void Init() override;
	virtual void Shutdown() override;
	virtual void StartGameInstance() override;
};*/
