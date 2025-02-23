#include <iostream>
#pragma once

class Meteor{
    public :
        char movement [11][22] ;
        int width,height ;
    
        void create(){
            width = ( rand() % 21  ) + 1 ;
            height = ( rand() % 10 ) + 1 ;
            movement[height][width] = '@' ;
        }

        void eaten(Player* player){
            if (player->playerX == width && player->playerY == height)
            {   
                system("cls");
                std::cout << "EATEN" ;
            }
        }
};