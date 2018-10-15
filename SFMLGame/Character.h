#ifndef CHARACTER_H
#define CHARACTER_H

#include <SFML/Graphics.hpp>
class Character
{
public:
	Character();
	~Character();
	void loadFromFile();
	void initialize();
	void update();
	void draw();
};
#endif