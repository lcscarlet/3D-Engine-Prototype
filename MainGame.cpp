#include <MainGame.h>
#include <GL/glew.h>
#include <SDL/SDL.h>
#include <string>
#include <iostream>

using namespace std;

void fatalError(std::string errorString) {
	std::cout << errorString << std::endl;
	std::cout << "Enter any key to quit...";
	int tmp;
	std::cin >> tmp;
	SDL_Quit();
}

MainGame::MainGame()
{
	_window = nullptr;
	_screenWidth = 1024;
	_screenHeight = 768;
	_gameState = GameState::PLAY;
}

MainGame::~MainGame()
{

}


void MainGame::drawGame() {
	glClearDepth(1.0);
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	SDL_GL_SwapWindow(_window);

}

void MainGame::run()(
	initSystems();

);

void MainGame::initSystems() {
	//Initialize SDL
	SDL_Init(SDL_INIT_EVERYTHING);
	_window = SDL_CreateWindow("Game Engine", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, _screenWidth, _screenHeight, SDL_WINDOW_OPENGL);
			if (_window == nullptr) {
			fatalError("SDL Window could not be created.");
		}

		SDL_GLContext glContext = SDL_GL_CreateContext(_window);
			if (glContext == nullptr) {
			fatalError("SDL_GL context could not be created.");
		}

			glewExperimental = true;
		GLenum error = glewInit();
		
			if (error != GLEW_OK){
				fatalError("Could not initalize glew!");
		}
			
			SDL_GL_SetAttribute(SDL_GL_DOUBLEBUFFER, 1);
			glClearColor(0, 0, 0, 1.0);
}

void MainGame::processInput() {
	SDL_Event happening;
	while (SDL_PollEvent(&happening)) {
		switch(happening.type)
					case SDL_QUIT:
					_gameState = GameState::EXIT;
					case SDL_MOUSEMOTION:
						happening.motion.x;
					
	}

}

void MainGame::gameLoop() {
	while (_gameState != GameState::EXIT) {
		processInput();
	};






}