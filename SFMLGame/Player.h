#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>
#include "Character.h"

using namespace std;

class Player : public Character
{
public:
	Player();
	~Player();

	sf::Texture playerTexture;
	sf::Sprite playerSprite;
	
	void initialize();
	void update();
	void draw(sf::RenderWindow *t_window);


};
#endif