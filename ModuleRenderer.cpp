#include "Globals.h"
#include "Application.h"
#include "ModuleRenderer.h"
#include "ModuleWindow.h"
#include <iostream>
#include <SDL.h>


ModuleRenderer::ModuleRenderer(){}

ModuleRenderer::~ModuleRenderer() {
	SDL_DestroyRenderer(_renderer);
}

bool ModuleRenderer::Init() {

	if (SDL_Init(SDL_INIT_VIDEO) != 0) {
		cerr << "Failed";
		return false;
	}
	
	ModuleWindow _window;

	_renderer = SDL_CreateRenderer(_window.Init, -1, SDL_RENDERER_ACCELERATED);

	if (_renderer == nullptr) {

		cerr << "Failed to crate renderer";
		return false;
	}



	return true;
}