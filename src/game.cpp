#include "game.h"

Game::Game() : mWindow(sf::VideoMode(500,600), "Tetris")
{
    // Vaš kod dolazi ovdje (ako bude potrebe).   
}

void Game::run(){
    while(mWindow.isOpen()){
        processEvents();
        update();
        render();
    }
}

void Game::processEvents()
{
    sf::Event event;
    while(mWindow.pollEvent(event))
    {
        switch(event.type)
        {
        case sf::Event::Closed:
            mWindow.close();
            break;

        case sf::Event::KeyPressed:
            // Vaš kod dolazi ovdje !!!            
	    break;
        case sf::Event::Resized:
            // Spriječi deformaciju objekata prilikom promjene veličine prozora
            sf::FloatRect viewRect(0, 0, event.size.width, event.size.height);
            mWindow.setView(sf::View(viewRect));
            break;
        }
    }
}

void Game::update()
{
   // Updatiranje scene. Vaš kod dolazi ovdje    
}

void Game::render()
{
     mWindow.clear();


     mWindow.draw(mBoard);
     mWindow.draw(mScore);

     mWindow.display();
}
