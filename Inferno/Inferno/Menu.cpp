#include "pch.h"
#include "Menu.h"


Menu::Menu() : State ()
{
}


Menu::~Menu()
{
}

void Menu::Update()
{
	Log::Write("Current state: Update");
}
void Menu::Draw()
{
	Log::Write("Current state: Draw");
}
void Menu::Input()
{
	Log::Write("Current state: Input");
}
void Menu::Initialize()
{
	Log::Write("Current state: Initialize");
}
