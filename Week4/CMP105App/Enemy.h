#pragma once
#include "Framework/GameObject.h"
class Enemy :
	public GameObject
{
	public:

	double speedX;
	double speedY;
	int movementX;
	int movementY;
	

	Enemy();
	~Enemy();

	void update(float dt);
	void setWindu(sf::RenderWindow* hwnd) { window = hwnd; };

	sf::RenderWindow* window;
	

	

};

