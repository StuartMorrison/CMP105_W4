#include "Enemy.h"

Enemy::Enemy()
{

	speedX = 0.f;
	speedY = 0.f;
	movementX = 0;
	movementY = 0;


}

Enemy::~Enemy()
{

}

void Enemy::update(float dt)
{
	sf::Vector2u pos = window->getSize();
	if (getPosition().x > pos.x)
	{
		movementX = 0;
		speedX = -200.f;

	}

	if (getPosition().x < 0)
	{
		movementX = 0;
		speedX = 200.f;

	}

	if (getPosition().y > pos.y)
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
	move(getVelocity() * dt);
}

