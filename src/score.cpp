#include "score.h"
#include <cstdlib>
#include <iostream>

Score::Score()
{
    if(!mFont.loadFromFile("Gasalt-Regular.ttf")){
        std::cerr << "Ne mogu učitati font: Gasalt-Regular.ttf !" << std::endl;
        std::exit(1);
    }
   // Vaš kod dolazi ovdje
}

void Score::addNoLinesCompleted(int n)
{
  // Vaš kod.
}

void Score::setGameOver()
{
  // Vaš kod.
}

void Score::update()
{
  // Vaš kod.
}

void Score::draw(sf::RenderTarget &target, sf::RenderStates states) const
{
  // Vaš kod.
}
