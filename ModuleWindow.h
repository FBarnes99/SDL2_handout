#pragma once

#ifndef __ModuleWindow_H__
#define __ModuleWindow_H__
#include <iostream>
#include <string>
#include <SDL.h>

using namespace std;

// TODO 1: Create the declaration of ModuleWindow class

class ModuleWindow : public Module {

public:
	virtual bool Init();
	
	ModuleWindow(int width, int height);
	ModuleWindow(){};
	~ModuleWindow();

	void pollEvents(SDL_Event &event);
	virtual bool CleanUp() {};

private:
	bool Init();
	int _width = 800;
	int _height = 600;

	bool _closed = false;


	SDL_Window * _window = nullptr;

	
	

	~ModuleWindow();
};

#endif // __ModuleWindow_H__