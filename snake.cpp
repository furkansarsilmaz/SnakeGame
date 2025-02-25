#include <iostream>
#include <cstdlib>
#include <windows.h>
#include "Player.h"
#include "Board.h"
#include "Meteor.h"

const int screenWidth = 23 ;
const int screenHeight = 11 ;

int playerPoint = 0 ;
bool gameOver = false ;

int main(){
    Board myboard ;
    Player myplayer ;
    Meteor mymeteor ;
    mymeteor.create();
    
    while (!gameOver)
    {                                                  
        myboard.draw(myplayer.playerX, myplayer.playerY, mymeteor,playerPoint);
        myplayer.move();

        if(mymeteor.eaten(&myplayer) == true)
        {
            playerPoint++ ;
            mymeteor.create();
            myplayer.grow();
        }
        Sleep(50);
    }
    
    return 0 ;
}