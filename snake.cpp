#include <iostream>
#include <cstdlib>
#include <windows.h>
#include "Board.h"
#include "Player.h"
#include "Meteor.h"

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
    Meteor mymeteor ;

    mymeteor.create();
    while (!gameOver)
    {
        myboard.draw();
        myplayer.move();
        myplayer.getMovement();
        
        
        if ( mymeteor.eaten(myplayer) == true ) 
        {
            gameOver = true ;
            lose() ;
        }

        if (myplayer.checkPosition() == true )
        { 
            gameOver = true ;
            lose();
        }
    }
    return 0 ;
}