#include <iostream>
#include <sstream>

#include "initState.h"
#include "../definitions.h"

initState::initState(GameDataRef data) : _data(data)
{
}

void initState::Init()
{
	this->_data->assets.LoadTexture("initState_Background", INIT_STATE_BACKGROUND_FILEPATH);

	//_background.setTexture(this->_data->assets.GetTexture("initState_Background")); <--- co� tu nie dzia�a
}

void initState::HandleInput()
{
	sf::Event event;

	while (this->_data->window.pollEvent(event))
	{
		if (sf::Event::Closed == event.type)
		{
			this->_data->window.close();
		}
	}
}

void initState::Update(float dt)
{
}

void initState::Draw(float dt)
{
	this->_data->window.clear();

	this->_data->window.draw(this->_background);

	this->_data->window.display();
}
