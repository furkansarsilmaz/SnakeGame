#include <iostream>
#include <conio.h>

class Player{
    private:
        char symbol = '*';

    public:
        int playerX, playerY ;
        
        Player(){
            playerX = ( rand() % 10 ) + 1 ;
            playerY = ( rand() % 22 ) + 1 ;
        }

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

        void grow(){};
};