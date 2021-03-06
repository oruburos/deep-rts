//
// Created by Per-Arne on 24.02.2017.
//

#ifndef WARC2SIM_GUI_H
#define WARC2SIM_GUI_H


#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/Graphics/Sprite.hpp>
#include <SFML/Graphics/Texture.hpp>
#include <SFML/Graphics/Font.hpp>
#include <SFML/Graphics/Text.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <memory>
#include "GraphicTilemap.h"
#include "Animation.h"



class Game;
class Player;
class Tile;
class Unit;


class GUI{
private:
	Animation animation;
    Game& game;

    sf::View povView;
    sf::View fullView;
    sf::View minimapView;
	sf::View frameView;

	void setupAudio();
	void setupPlot();
    void setupFrame();
	void setupView();
	void setupFont();

    sf::Texture gameFrameTexture;
    sf::Sprite gameFrame;
    sf::Font font;
    sf::Text text;

	GraphicTilemap map;


    Tile* selectedTile = NULL;

	int pIterator = 0;
public:
    GUI(Game &game);

    void caption();
    void render();
    void update();
	void reset();

	std::vector<sf::Color> colors;



    bool panLeft = false;
    bool panRight = false;
    bool panUp = false;
    bool panDown = false;

    bool toggleFrame = true;

    int velocity = 10;

    sf::RenderWindow  window;
    void drawTiles();

    sf::View* currentView;

    void drawUnits();

    int mouseClick(int mX, int mY);



    void drawSelected();
	void drawPlayerSelectedUnit();
    void rightClick(Tile &tile);
    void leftClick(Tile &tile);


    Player *player;

    void drawStats();

    void drawStatistics();

	void drawActionDistribution();

    bool renderGUI = true;

    void showNoGuiMessage();

    void handleEvents();

    void drawScoreBoard();

    int showGridLines = false;

    sf::Vector2f getCameraOffset();

	void selectPlayer(int index);

    unsigned char * capture();

    sf::Image captured_image;
    unsigned int width;
	unsigned int height;
};


#endif //WARC2SIM_GUI_H
