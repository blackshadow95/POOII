#pragma once

class State
{
public:

	virtual void Update() = 0;
	virtual void Draw() = 0;
	virtual void Input() = 0;
	virtual void Initialize() = 0;
};

