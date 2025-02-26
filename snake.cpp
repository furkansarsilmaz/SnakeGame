#include <iostream>
#include <cstdlib>
#include <windows.h>
#include "Board.h"
#include "Player.h"

// Globals
char grid [11][23] ;
int playerPoint = 0 ;
bool gameOver = false ;

int main(){
    Board myboard ;
    Player myplayer ;
    while (!gameOver)
    {
        myboard.draw();
        myplayer.move();
        myplayer.getMovement();
        myplayer.checkPosition();
    }
    
    return 0 ;
}