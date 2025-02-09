// Fill out your copyright notice in the Description page of Project Settings.


#include "SocketActor.h"

// Sets default values
ASocketActor::ASocketActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ASocketActor::BeginPlay()
{
	Super::BeginPlay();
	_socket = new ClientSocket();
	_socket->CreateSocket();
}

// Called every frame
void ASocketActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

