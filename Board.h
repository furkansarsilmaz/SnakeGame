#include <iostream>
#include "Meteor.h"

class Board {
    private :
        int width = 23 ;
        int height = 11 ;
        
    public :
        void draw(int playerX, int playerY, Meteor &meteor, int playerPoint){
            /*
            draws the screen borders with for loops.
            */
            system("cls");
            // Top section of the border
            for (int i = 0; i < width; i++)
            {
                std::cout << '#' ;
            }
            std::cout << std::endl ;

            // Body section of the border
            for (int i = 0; i < height; i++)
            {
                for (int j = 0; j < width; j++)
                {
                    if (j == 0 || j == 22)
                    {
                        std::cout << '#' ;
                    }
                    else
                    {
                        if (playerX == j && playerY == i)
                        {
                            std::cout << '*' ;
                        }
                        else
                        {
                            if (meteor.movement[i][j] == '@')
                            {
                                std::cout << '@' ;
                            }
                            else{std::cout << ' ' ;}
                        }
                        
                    }
                }
                std::cout << std::endl ; 
            }
            
            // Bottom section of the border
            for (int i = 0; i < width; i++)
            {
                std::cout << '#' ;
            }
            // Point section of the border
            std::cout << std::endl ;
            std::cout << "#" << "  Player point : " << playerPoint << "   #" ;
            
        }
};