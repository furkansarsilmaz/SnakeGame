#include <iostream>
#include <cstdlib>
#include <windows.h>
#include <conio.h>
#include "Board.h"
bool gameOver = false ;

class Player{
    private:
        char symbol = '*';

    public:
        int playerX = ( rand() % 10 ) + 1 ;
        int playerY = ( rand() % 22 ) + 1 ;

        void move(){
            int action = getch();
            switch (action)
            {
            case 'w':
                playerY-- ;
                break;
            
            case 's':
                playerY++ ;
                break;
            
            case 'd':
                playerX++;
                break ;
            
            case 'a':
                playerX--;
                break;
            
            default:
                break;
            }

        };
};


int main(){
    Board myboard ;
    Player myplayer ;
    while (!gameOver)
    {
        myboard.draw(myplayer.playerX, myplayer.playerY);
        myplayer.move();
    }
    
    return 0 ;
}