#include <iostream>
extern char grid[11][23] ;
#pragma once 

class Tail {
    public:
        int tailQuant = 0 ;
        char tail = 'o' ;
        int tailX [100] ;
        int tailY [100] ;
        int prevTailX[100] ;
        int prevTailY[100] ;

        void addTail()
        {
            tailQuant++ ;
        }

        void moveTail(int x, int y)
        /*
            With this function, our tail follows the head.
            1- first loop it holds the previous coordinates.
            2- Second loop tail moves and 
            3- with the third loop draws the symbol of the tail.
        */
        {
            if (tailQuant > 0 )
            {
                for ( int i = 0; i < tailQuant ; i++ )
                {
                    prevTailX[i] = tailX[i] ;
                    prevTailY[i] = tailY[i] ;
                }

                for (int i = tailQuant - 1 ; i > 0 ; i--)
                {
                    tailX[i] = tailX[i-1] ;
                    tailY[i] = tailY[i-1] ;
                }
                
                for (int i = 0; i < tailQuant; i++)
                {
                    grid [ prevTailY[i] ] [ prevTailX[i] ] = ' ' ;
                }

                tailX[0] = x ;
                tailY[0] = y ;

                for (int i = 0; i < tailQuant; i++)
                {
                    grid[ tailY[i] ][ tailX[i] ] = tail ;
                }
                

            }
            
        }

        bool checkTail()
        {
            
            
        }
};