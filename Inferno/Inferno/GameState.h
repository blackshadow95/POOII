#pragma once
#include "State.h"
#include "Log.h"

class GamePlayState : public State
{
public:
	GamePlayState();
	~GamePlayState();

	void Update() override;
	void Draw() override;
	void Input() override;
	void Initialize() override;
};

