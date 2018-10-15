#include <NPC.h>

NPC::NPC()
{
	if (!npcTexture.loadFromFile("E-100.png"))
	{
		std::string s("Error loading texture");
		

	}
	
	npcSprite.setTexture(npcTexture);
	npcSprite.setPosition(300, 300);



};
NPC::~NPC(){};

void NPC::initialize()
{
	cout << "NPC initialize" << endl;
}
void NPC::update()
{

	pos = npcSprite.getPosition();
	npcSprite.setPosition(pos.x - 1, pos.y + 0);
	
	cout << "NPC updating" << endl;
}
void NPC::draw(sf::RenderWindow * t_window)
{
	t_window->draw(npcSprite);
	cout << "NPC drawing" << endl;
}