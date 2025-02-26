#include <iostream>
#include <cstdlib>
#include <windows.h>
#include "Board.h"
#include "Player.h"

// Globals
char grid [11][23] ;
int playerPoint = 0 ;
bool gameOver = false ;

void lose(){
    system("cls");
    std::cout << " YOU LOSE !!! " ;
};

int main(){
    Board myboard ;
    Player myplayer ;
    while (!gameOver)
    {
        myboard.draw();
        myplayer.move();
        myplayer.getMovement();
        if ( gameOver = myplayer.checkPosition() ) lose();
    }
    return 0 ;
}