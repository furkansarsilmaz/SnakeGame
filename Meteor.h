#include <iostream>
#include <cstdlib>
#include "Player.h"

extern char grid [11][23] ;
class Meteor {
    public :
        int meteorX, meteorY ;
    char create()
    {
        srand(time(NULL)) ;
        meteorX = rand() % 20 + 1 ;
        meteorY = rand() % 9  + 1 ;
        return grid[meteorY][meteorX] = '@' ;
    }

    bool eaten(Player &player)
    {
       if ( player.playerX == meteorX && player.playerY == meteorY) 
       {
        return true ;
       }
       return false ;
    }
} ;