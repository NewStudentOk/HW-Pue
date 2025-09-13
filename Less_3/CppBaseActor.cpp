#include "CppBaseActor.h"

ACppBase::ACppBase() {}

void ACppBase::BeginPlay() {
    Super::BeginPlay();
    ShowActorInformation();   // Выводим информацию сразу при старте уровня
}

// Метод выводит подробную информацию об объекте
void ACppBase::ShowActorInformation() const {
    UE_LOG(LogTemp, Display, TEXT("Instance name: %s"), *GetName());
    UE_LOG(LogTemp, Display, TEXT("EnemyNum: %d"), EnemyCount);
    UE_LOG(LogTemp, Display, TEXT("IsAlive: %d"), bIsAlive ? 1 : 0);  // Преобразование булевого значения в число
}