#include <iostream>
extern char grid[11][23] ;
#pragma once 

class Tail {
    public:
        int tailQuant = 0 ;
        char tail = 'o' ;
        int tailX [100] ;
        int tailY [100] ;
        int prevtailX [100] ;
        int prevtailY [100] ;

        void addTail()
        {
            tailQuant++ ;
        }

        void moveTail(int x, int y)
        /*
            With this function, our tail follows the head.
            1- first loop holds the previous coordinates.
            2- Second loop moves the tail to previous coordinate 
            3- third loop cleanse the symbol on the previous coordinate
            4- fourth loop draws the symbol on the new coordinates
        */
        {
            if (tailQuant > 0 )
            {   
                for(int i = 0 ; i < tailQuant ; i++)
                {
                    prevtailX[i] = tailX[i] ;
                    prevtailY[i] = tailY[i] ;
                }

                for (int i = tailQuant ; i > 0 ; i--)
                {
                    tailX[i] = tailX[i-1] ;
                    tailY[i] = tailY[i-1] ;
                }
                
                
                tailX[0] = x ;
                tailY[0] = y ;

                for (int i = 0; i < tailQuant; i++)
                {
                    grid[prevtailY[i]][prevtailX[i]] = ' ' ;
                }

                for (int i = 0; i < tailQuant; i++)
                {
                    grid[ tailY[i] ][ tailX[i] ] = tail ;
                }

            }
            
        }

        bool checkTail(Player& player)
        {
            for (int i = 0 ; i < tailQuant ; i++)
            {
                if (tailX[i] == player.playerX && tailY[i] == player.playerY)
                {
                    return true ;
                }
                
            }
            return false ;
        }
};