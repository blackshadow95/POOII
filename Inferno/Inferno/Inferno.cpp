

#include "pch.h"
#include <iostream>
#include "GameStateManager.h"
#include "GameState.h"

int main()
{
	GameStateManager stateManager;

	State *gamePlay = new GamePlayState;

	stateManager.PushState(gamePlay);
	stateManager.GameLoop();
}


