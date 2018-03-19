#include "Globals.h"
#include "Application.h"
#include "ModuleWindow.h"
#include <iostream>
#include <SDL.h>

// TODO 2: Init the library and check for possible error
// using SDL_GetError()



// TODO 3: pick the width and height and experiment with flags: borderless / fullscreen / resizable,
// then create the window and check for errors

// TODO 4: Finally create a screen surface and keep it as a public variable

// TODO 5: Fill with code CleanUp() method :)

ModuleWindow::ModuleWindow( int width, int height) :
	_width(width), _height(height)
{

	_closed = !Init();
}

ModuleWindow::~ModuleWindow() {
	
	SDL_DestroyWindow(_window);
	
	SDL_Quit();

}

bool ModuleWindow::Init()
{
	bool ret = true;

	int ok = SDL_Init(SDL_INIT_VIDEO);
	if (ok < 0) {

	
		LOG("Error initializating cideo subsystem %s", SDL_GetError());
	
		ret = false;
	}
	if (ret == true) {


		_window = SDL_CreateWindow("Hahasi", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, _width, _height, 0);

		if (_window == nullptr) {
			cerr << "Failed to crate window";
			return false;
		}

	}
	return ret;
}

void ModuleWindow::pollEvents(SDL_Event &event) {
	switch (event.type) {
	case SDL_QUIT:
		_closed = true;
		break;

	case SDL_KEYDOWN:
		switch (event.key.keysym.sym) {
		case  SDLK_ESCAPE:
			_closed = true;
			break;

		}


	default:
		break;
	}

}
	
	bool ModuleWindow :: CleanUp(){
	
	

}