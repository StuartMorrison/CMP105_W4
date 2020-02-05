#pragma once
#include "Framework/GameObject.h"
class Player :
	public GameObject
{
public:

	double speedx, speedy;


	Player();
	~Player();

	void handleInput(float dt);
	void setInput();
	
};

