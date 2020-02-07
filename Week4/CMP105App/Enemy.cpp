#include "Enemy.h"

Enemy::Enemy()
{

	speedX = 200.f;
	speedY = 200.f;
	movementX = 0.f;
	movementY = 0.f;

}

Enemy::~Enemy()
{

}

void Enemy::update(float dt)
{
	sf::Vector2u pos = window->getSize();
	if (getPosition().x+50 > pos.x)
	{
		movementX = 0;
		speedX = -200.f;

	}

	if (getPosition().x < 0)
	{
		movementX = 0;
		speedX = 200.f;

	}

	if (getPosition().y+50 > pos.y)
	{
		movementY = 0;
		speedY = -200.f;

	}

	if (getPosition().y < 0)
	{
		movementY = 0;
		speedY = 200.f;

	}

	movementY = speedY * dt;
	movementX = speedX * dt;
	setVelocity(movementX, movementY);
	move(getVelocity());
}

