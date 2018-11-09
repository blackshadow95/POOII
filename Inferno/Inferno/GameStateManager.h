#pragma once
#include "State.h"
#include <vector>
class GameStateManager
{
private:
	std::vector<State *> states;
	int index = 0;
public:
	GameStateManager();
	~GameStateManager();

	void GameLoop();
	void PushState(State *s);
};

