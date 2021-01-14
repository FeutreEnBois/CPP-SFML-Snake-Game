#include <SFML/Graphics.hpp>
#include <string>
#include "Game.h"

void main()
{
	//Programme entry point
	Game game; // Creating our game object
	while (!game.GetWindow()->IsDone()) {
		//Game loop.
		game.HandleInput();
		game.Update();
		game.Render();
		sf::sleep(sf::seconds(0.02)); // Sleep for 0.2 seconds.
		game.RestartClock(); // Restarting our clock.
	}
}
