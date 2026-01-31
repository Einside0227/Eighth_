#include "BaseItem.h"

ABaseItem::ABaseItem()
{
    PrimaryActorTick.bCanEverTick = false;

}

void ABaseItem::OnItemOverlap(AActor* OverlapActor)
{
	// 기본은 빈 함수 - 각 자식 클래스에서 구현
}

void ABaseItem::OnItemEndOverlap(AActor* OverlapActor)
{
	// 기본은 빈 함수 - 필요하다면 자식 클래스에서 활용
}

void ABaseItem::ActivateItem(AActor* Activator)
{
	// 기본은 빈 함수 - 자식 클래스에서 구현
}

FName ABaseItem::GetItemType() const
{
	return ItemType;
}

void ABaseItem::DestroyItem()
{
	Destroy();
}
