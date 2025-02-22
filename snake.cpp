#include <iostream>
#include <cstdlib>
#include <windows.h>
#include "Player.h"
#include "Board.h"
#include "Meteor.h"

bool gameOver = false ;

int main(){
    Board myboard ;
    Player myplayer ;
    Meteor mymeteor ;
    mymeteor.create();
    
    while (!gameOver)
    {                                                  
        myboard.draw(myplayer.playerX, myplayer.playerY, mymeteor);
        myplayer.move();
        Sleep(100);
    }
    
    return 0 ;
}