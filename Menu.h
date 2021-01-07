#pragma once
#include <SFML/Graphics.hpp>
#include <fstream>
#include <vector>
using namespace sf;
class Menu
{
private:
	int items = 4;
	int optionitems = 5;
	Text menu[4];
	int selecteditem = 0, selectedoption = 0;
	Font font;
	Texture men;
	Sprite mnu;
	Text OptionMenu[5];
	std::ifstream x;
	std::vector<int> scores;
	Text Max[5];

public:
	Menu();
	void drawmenu(RenderWindow &window);
	void moveup();
	void movedown();
	int retunSI();
	int returnOM() { return selectedoption; }
	void drawoption(RenderWindow &window);
	void displayscore(RenderWindow &window);

	void moveoup();
	void moveodown();
	void chighestscore(std::string);
	~Menu();
};
