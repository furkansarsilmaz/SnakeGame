#include <iostream>
#include <cstdlib>
#include <windows.h>
#include "Board.h"
#include "Player.h"
#include "Meteor.h"
#include "Tail.h"

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
    Tail mytail ;

    mymeteor.create();
    while (!gameOver)
    {
        myboard.draw();
        
        int Xposition = myplayer.getPositionX();
        int Yposition = myplayer.getPositionY();

        myplayer.move();
        mytail.moveTail(Xposition, Yposition);
        myplayer.getMovement();
        
        if ( mymeteor.eaten(myplayer) == true ) 
        {
            mymeteor.create();
            mytail.addTail();
        }

        if (myplayer.checkPosition() == true )
        { 
            gameOver = true ;
            lose();
        }
    }
    return 0 ;
}