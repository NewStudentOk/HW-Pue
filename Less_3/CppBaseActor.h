#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CppBaseActor.generated.h"

UCLASS()
class PROJECTNAME_API ACppBase : public AActor {
GENERATED_BODY()

public:
// Конструктор
ACppBase();

protected:
// Функция отображения информации об актере
void ShowActorInformation();

private:
UPROPERTY(EditAnywhere)
int32 EnemyCount = 0;     // Количество врагов

UPROPERTY(EditAnywhere)
bool bIsAlive = true;
};