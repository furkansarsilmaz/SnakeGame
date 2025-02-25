#include <iostream>
#include <cstdlib>
#include <windows.h>
#include "Board.h"

char grid [11][23] ;

int playerPoint = 0 ;
bool gameOver = false ;

int main(){
    Board myboard ;
    myboard.draw();
    return 0 ;
}