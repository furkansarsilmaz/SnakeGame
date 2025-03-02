#include <iostream>
extern char grid[11][23] ;
#pragma once 

class Tail {
    public:
        int tailQuant = 0 ;
        char tail = 'o' ;
        int tailX [100] ;
        int tailY [100] ;

        void addTail()
        {
            tailQuant++ ;
        }

        void moveTail(int x, int y)
        {
            if (tailQuant > 0 )
            {
                for ( int i = 0; i < tailQuant ; i++ )
                {
                    grid[y][x] = 'o' ;
                    //grid[tailY[0]] [tailX[0]] = ' ' ;
                }
                
            }
            
        }

};