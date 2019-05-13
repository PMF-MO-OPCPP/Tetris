#include "tetrimino.h"

// Boje komada. Svaki komad ima svoju boju.
const sf::Color Tetrimino::mColors[SIZE]= {
  sf::Color::Blue,
  sf::Color::Red,
  sf::Color::Green,
  sf::Color::Cyan,
  sf::Color::Magenta,
  sf::Color::Yellow,
  sf::Color(195,132,58)
};

// LOgički prikaz svih komada i svih njihovih rotacija. 
const int Tetrimino::mDijelovi[SIZE][N_ROTACIJA][MAT_SIZE][MAT_SIZE] = {
    { // O
        {
            {0,0,0,0},
            {0,1,2,0},
            {0,1,1,0},
            {0,0,0,0}
        },
        {
            {0,0,0,0},
            {0,1,2,0},
            {0,1,1,0},
            {0,0,0,0}
        },
        {
            {0,0,0,0},
            {0,1,2,0},
            {0,1,1,0},
            {0,0,0,0}
        },
        {
            {0,0,0,0},
            {0,1,2,0},
            {0,1,1,0},
            {0,0,0,0}
        }
    },
    {//I
        {
            {0,0,0,0},
            {1,1,2,1},
            {0,0,0,0},
            {0,0,0,0}
        },
        {
            {0,0,1,0},
            {0,0,2,0},
            {0,0,1,0},
            {0,0,1,0}
        },
        {
            {0,0,0,0},
            {1,1,2,1},
            {0,0,0,0},
            {0,0,0,0}
        },
        {
            {0,0,1,0},
            {0,0,2,0},
            {0,0,1,0},
            {0,0,1,0}
        }
    },
    {//S
        {
            {0,0,0,0},
            {0,0,2,1},
            {0,1,1,0},
            {0,0,0,0}
        },
        {
            {0,0,1,0},
            {0,0,2,1},
            {0,0,0,1},
            {0,0,0,0}
        },
        {
            {0,0,0,0},
            {0,0,2,1},
            {0,1,1,0},
            {0,0,0,0}
        },
        {
            {0,0,1,0},
            {0,0,2,1},
            {0,0,0,1},
            {0,0,0,0}
        }
    },
    {//Z
        {
            {0,0,0,0},
            {0,1,2,0},
            {0,0,1,1},
            {0,0,0,0}
        },
        {
            {0,0,0,1},
            {0,0,2,1},
            {0,0,1,0},
            {0,0,0,0}
        },
        {
            {0,0,0,0},
            {0,1,2,0},
            {0,0,1,1},
            {0,0,0,0}
        },
        {
            {0,0,0,1},
            {0,0,2,1},
            {0,0,1,0},
            {0,0,0,0}
        }
    },
    {//L
        {
            {0,0,0,0},
            {0,1,2,1},
            {0,1,0,0},
            {0,0,0,0}
        },
        {
            {0,0,1,0},
            {0,0,2,0},
            {0,0,1,1},
            {0,0,0,0}
        },
        {
            {0,0,0,1},
            {0,1,2,1},
            {0,0,0,0},
            {0,0,0,0}
        },
        {
            {0,1,1,0},
            {0,0,2,0},
            {0,0,1,0},
            {0,0,0,0}
        }
    },
    {//J
        {
            {0,0,0,0},
            {0,1,2,1},
            {0,0,0,1},
            {0,0,0,0}
        },
        {
            {0,0,1,1},
            {0,0,2,0},
            {0,0,1,0},
            {0,0,0,0}
        },
        {
            {0,1,0,0},
            {0,1,2,1},
            {0,0,0,0},
            {0,0,0,0}
        },
        {
            {0,0,1,0},
            {0,0,2,0},
            {0,1,1,0},
            {0,0,0,0}
        }
    },
    {//T
        {
            {0,0,0,0},
            {0,1,2,1},
            {0,0,1,0},
            {0,0,0,0}
        },
        {
            {0,0,1,0},
            {0,0,2,1},
            {0,0,1,0},
            {0,0,0,0}
        },
        {
            {0,0,1,0},
            {0,1,2,1},
            {0,0,0,0},
            {0,0,0,0}
        },
        {
            {0,0,1,0},
            {0,1,2,0},
            {0,0,1,0},
            {0,0,0,0}
        }
    }
};

