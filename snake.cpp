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
    myplayer.getHead();

    while (!gameOver)
    {
        myboard.draw();
        
        int Xposition = myplayer.getPositionX();
        int Yposition = myplayer.getPositionY();

        myplayer.move();
        myplayer.getMovement();
        mytail.moveTail(Xposition, Yposition);
        
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

        if (mytail.checkTail(myplayer) == true)
        {
            gameOver = true ;
            std::cout << "KUYRUK CARPTI"<< std::endl ;
            std::cout << mytail.tailQuant ;
        }
        
    }
    return 0 ;
}