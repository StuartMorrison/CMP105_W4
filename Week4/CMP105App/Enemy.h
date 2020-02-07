#pragma once
#include "Framework/GameObject.h"
class Enemy :
	public GameObject
{
	public:

	double speedX;
	double speedY;
	float movementX;
	float movementY;
	sf::RenderWindow* window;
	

	Enemy();
	~Enemy();

	void update(float dt);
	void setWindu(sf::RenderWindow* hwnd) { window = hwnd; };

	

	

};

