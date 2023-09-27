#pragma once
#include <Windows.h>
#include <SDL/SDL.h>
#include <GL/glew.h>

enum class GameState {PLAY, EXIT};

class MainGame
{
public:
	MainGame();
	~MainGame();

	void run();

private:
	SDL_Window* _window;
	int _screenWidth;
	int _screenHeight;

	void initSystems();
	void processInput();
	void drawGame();
	void gameLoop();
	GameState _gameState;

};