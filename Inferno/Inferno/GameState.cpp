#include "pch.h"
#include "GameState.h"


GamePlayState::GamePlayState() : State ()
{
}


GamePlayState::~GamePlayState()
{
}

void GamePlayState::Update()
{
	Log::Write("Current state: Update");
}
void GamePlayState::Draw()
{
	Log::Write("Current state: Draw");
}
void GamePlayState::Input()
{
	Log::Write("Current state: Input");
}

void GamePlayState::Initialize()
{
	Log::Write("Current state: Initialize");
}