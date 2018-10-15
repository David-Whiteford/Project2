#include <Player.h>

Player::Player()
{
	if (!playerTexture.loadFromFile("E-100.png"))
	{
		std::string s("Error loading texture");
	

	}

	playerSprite.setTexture(playerTexture);
	playerSprite.setPosition(200, 200);
};
Player::~Player(){}



void Player::initialize()
{
	cout << "Player initialize" << endl;
}
void Player::update()
{

	
	cout << "Player updating" << endl;
}
void Player::draw(sf::RenderWindow * t_window)
{
	t_window->draw(playerSprite);
	cout << "Player drawing" << endl;
}