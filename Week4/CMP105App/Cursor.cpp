#include "Cursor.h"

Cursor::Cursor()
{
	mouseX = 0.f;
	mouseY = 0.f;
}

Cursor::~Cursor()
{

}

void Cursor::update(float dt)
{
	mouseX = input->getMouseX();
	mouseY = input->getMouseY();
	setPosition(mouseX, mouseY);
	
}
