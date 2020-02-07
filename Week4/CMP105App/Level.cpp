#include "Level.h"

Level::Level(sf::RenderWindow* hwnd, Input* in)
{
	window = hwnd;
	input = in;

	// initialise game objects
	texture.loadFromFile("gfx/Mushroom.png");

	testSprite.setTexture(&texture);
	testSprite.setSize(sf::Vector2f(100, 100));
	testSprite.setPosition(100, 100);

	testSprite.setInput(input);
	

	texture2.loadFromFile("gfx/Goomba.png");

	evilSprite.setTexture(&texture2);
	evilSprite.setSize(sf::Vector2f(50, 50));
	evilSprite.setPosition(300, 300);

	evilSprite.setWindu(window);

	texture3.loadFromFile("gfx/sonic.png");

	minionSprite.setTexture(&texture3);
	minionSprite.setSize(sf::Vector2f(50, 50));
	minionSprite.setPosition(900, 50);
	
	minionSprite.setWindu(window);

	MouseTex.loadFromFile("gfx/icon.png");

	mice.setTexture(&MouseTex);
	mice.setSize(sf::Vector2f(15, 20));

	mice.setInput(input);

	window->setMouseCursorVisible(false);

	


}

Level::~Level()
{

}

// handle user input
void Level::handleInput(float dt)
{
	// Close window on Escape pressed.
	if (input->isKeyDown(sf::Keyboard::Escape))
	{
		window->close();
	}

	testSprite.handleInput(dt);
	

}

// Update game objects
void Level::update(float dt)
{	
	evilSprite.update(dt);
	minionSprite.update(dt);
	mice.update(dt);
}

// Render level
void Level::render()
{
	beginDraw();

	window->draw(testSprite);
	window->draw(evilSprite);
	window->draw(minionSprite);
	window->draw(mice);

	endDraw();
}

// clear back buffer
void Level::beginDraw()
{
	window->clear(sf::Color(100, 149, 237));
}

// Ends rendering to the back buffer, and swaps buffer to the screen.
void Level::endDraw()
{
	window->display();
}