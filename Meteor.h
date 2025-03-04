#include <iostream>
#include <cstdlib>
#include "Player.h"

extern char grid [11][23] ;
class Meteor {
    public :
        int meteorX, meteorY ;
    char create()
    {
        bool creating = true ;
        srand(time(NULL)) ;
        while (creating)
        {
            meteorX = rand() % 20 + 1 ;
            meteorY = rand() % 9 + 1 ;
            if ( grid[meteorY][meteorX] == ' ')
            {
                return grid[meteorY][meteorX] = '@' ;
                creating = false ;
            }
            
        }

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