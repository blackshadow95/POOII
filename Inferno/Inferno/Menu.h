#pragma once
#include "State.h"
#include "Log.h"
class Menu : public State
{
public:
	Menu();
	~Menu();

	void Update() override;
	void Draw() override;
	void Input() override;
	void Initialize() override;
};

