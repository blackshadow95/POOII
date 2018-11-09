#include "pch.h"
#include "GameStateManager.h"


GameStateManager::GameStateManager()
{
}


GameStateManager::~GameStateManager()
{
}

void GameStateManager::GameLoop()
{
	while (true)
	{
		states[index]->Input();
		states[index]->Update();
		states[index]->Draw();
		states[index]->Initialize();
	}
}
void GameStateManager::PushState(State *s)
{
	if (s != nullptr)
	{
		states.push_back(s);
	}
}