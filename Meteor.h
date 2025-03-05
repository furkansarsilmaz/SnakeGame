#include <iostream>
#include <cstdlib>
#include "Player.h"

extern char grid [11][23] ;
class Meteor {
    public :
        int meteorX, meteorY ;

    char create()
    /*
        with random function creates a coordinate
        for fruit's and checks the coordinates.
        If the coordinate is empty 
        ( which means there is no edge '#' or snake 'o' ) 
        assings the fruit to the that position.
    */
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
    /*
        if the head position and the snake's position
        equals returns true , otherwise false.
    */
    {
       if ( player.playerX == meteorX && player.playerY == meteorY) 
       {
        return true ;
       }
       return false ;
    }
} ;