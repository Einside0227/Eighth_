#pragma once

#include "CoreMinimal.h"
#include "WaveData.generated.h"

// 웨이브에 대한 데이터 구조
USTRUCT(BlueprintType)
struct FWaveData
{
    GENERATED_BODY()

public:
    // 웨이브 번호
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Wave")
    int WaveNumber;

    // 웨이브에서 생성할 아이템의 수
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Wave")
    int NumItems;

    // 웨이브의 지속 시간 (초 단위)
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Wave")
    float Duration;

    // 웨이브 이름 (UI에서 사용할 수 있음)
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Wave")
    FText WaveName;
};
