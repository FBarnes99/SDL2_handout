#pragma once


#include <iostream>
#include <string>
#include <SDL.h>

#include "Module.h"


using namespace std;

class ModuleRenderer : public Module {

public:
	virtual bool Init();

	ModuleRenderer() {};
	~ModuleRenderer() {};
	
	virtual bool CleanUp() {};

private:
	SDL_Renderer  *_renderer = nullptr;
	bool Init();
	

	bool _closed = false;

	




	~ModuleRenderer();

};