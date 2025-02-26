#include <iostream>
#include <conio.h>
extern char grid [11][23] ;
class Player{
    public:
        char head = 'o' ;
        int playerX = ( rand() % 20 ) ;
        int playerY = ( rand() % 9 ) ;

        void move(){
            /*
            With conio library this function takes action
            with getch method and changes the coordinates of 
            player with switch.
            */
            char action = getch();
            switch (action)
            {
            case 'w':
                grid[playerY][playerX] = ' ' ;
                playerY-- ;
                break;
            
            case 's' :
                grid[playerY][playerX] = ' ' ;
                playerY++ ;
                break;

            case 'd' :
                grid[playerY][playerX] = ' ' ;
                playerX++ ;
                break;

            case 'a' :
                grid[playerY][playerX] = ' ' ;
                playerX-- ;
                break;

            default:
                break;
            }
        }

        char getMovement(){
            /*
            returns to current position of the player
            */
            return grid[playerY][playerX] = head ;
        }

        bool checkPosition(){
            if (playerX <= 0 || playerX >= 22 || playerY <= 0 || playerY >= 10 ) return true ;
            return false ;
        }
};