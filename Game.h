#pragma once

#include "Window.h"
#include "World.h"
#include "Snake.h"
#include "Textbox.h"

class Game
{
public:
	Game();
	~Game();

	void HandleInput();
	void Update();
	void Render();
	Window* GetWindow();
	sf::Time GetElapsed();
	void RestartClock();

private:
	Textbox m_textbox;
	World m_world;
	Snake m_snake;
	Window m_window;
	//std::string path;
	sf::Clock m_clock;
	float m_elapsed;



};

