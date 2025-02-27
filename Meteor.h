#include <iostream>
#include "Player.h"

extern char grid [11][23] ;
class Meteor {
    public :
        int meteorX, meteorY ;

    char create()
    {
        meteorX = rand() % 20 ;
        meteorY = rand() % 9 ;
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