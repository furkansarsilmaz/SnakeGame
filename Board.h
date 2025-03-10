#include <iostream>
extern char grid [11][23] ;

class Board {
    public:
        int width = 23 ;
        int height = 11 ;

        Board(){
            /*
                This constructor assings the symbols 
                for the board with loops.
            */
            for (int i = 0; i < height; i++)
            {
                for (int j = 0; j < width; j++)
                {
                    if (i == 0 || i == 10 || j == 0 || j == 22)
                    {
                        grid[i][j] = '#' ;
                    }
                    else{ grid[i][j] = ' ' ;}
                }
                std::cout << std::endl ;
            }
            
        }
        
        void draw(int point){
            /*
                draws the vector with nested loops.
            */
            system("cls");
            for (int i = 0; i < height; i++)
            {
                for (int j = 0; j < width; j++)
                {
                    std::cout << grid[i][j];
                }
                std::cout << std::endl ;
            }
            
            std::cout << "# " << " Player Point : " << point << " #" ; 
            
        }
};