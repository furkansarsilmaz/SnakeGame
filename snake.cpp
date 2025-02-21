#include <iostream>
#include <cstdlib>
#include <windows.h>
#include "Player.h"
#include "Board.h"
bool gameOver = false ;

int main(){
    Board myboard ;
    Player myplayer ;

    while (!gameOver)
    {
        myboard.draw(myplayer.playerX, myplayer.playerY);
        myplayer.move();
        Sleep(100);
    }
    
    return 0 ;
}