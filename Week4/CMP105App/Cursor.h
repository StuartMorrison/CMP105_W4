#pragma once
#include "Framework/GameObject.h"
class Cursor :
	public GameObject
{
public:

	float mouseX;
	float mouseY;

	Cursor();
	~Cursor();

	void update(float dt);
};

