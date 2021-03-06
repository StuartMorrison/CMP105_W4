#pragma once

#include <SFML/Graphics.hpp>
#include "Framework/Input.h"
#include "Framework/GameObject.h"
#include "Player.h"
#include "Enemy.h"
#include "Cursor.h"
#include <string.h>
#include <iostream>


class Level{
public:
	Level(sf::RenderWindow* hwnd, Input* in);
	~Level();

	void handleInput(float dt);
	void update(float dt);
	void render();

private:
	// Default functions for rendering to the screen.
	void beginDraw();
	void endDraw();

	// Default variables for level class.
	sf::RenderWindow* window;
	Input* input;

	// Level objects
	Player testSprite;
	sf::Texture texture;
Enemy evilSprite;
	sf::Texture texture2;
Enemy minionSprite;
	sf::Texture texture3;
	
	Cursor mice;
	sf::Texture MouseTex;
	

};