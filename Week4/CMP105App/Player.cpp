#include "Player.h"

Player::Player()
{
	speedx = 0.f;
	speedy = 0.f;
}

Player::~Player()
{
}

void Player::handleInput(float dt)
{
	speedx = 0.f;
	speedy = 0.f;
	if (input->isKeyDown(sf::Keyboard::Right))
	{
		speedx = 200.f;
		setVelocity(speedx, speedy);
		move(getVelocity() * dt);
	}
	if (input->isKeyDown(sf::Keyboard::Left))
	{
		speedx = -200.f;
		setVelocity(speedx, speedy);
		move(getVelocity() * dt);
	}
	if (input->isKeyDown(sf::Keyboard::Up))
	{
		speedy = -200.f;
		setVelocity(speedx, speedy);
		move(getVelocity() * dt);
	}
	if (input->isKeyDown(sf::Keyboard::Down))
	{
		speedy = 200.f;
		setVelocity(speedx, speedy);
		move(getVelocity() * dt);
	}

}