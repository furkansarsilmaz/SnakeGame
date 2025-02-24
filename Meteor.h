#include <iostream>
#pragma once

class Meteor{
    public :
        char movement [11][22] ;
        int width,height ;
    
        void create(){
            movement[height][width] = ' ' ;
            width = ( rand() % 21  ) + 1 ;
            height = ( rand() % 10 ) + 1 ;
            movement[height][width] = '@' ;
        }

        bool eaten(Player* player){
            return  (player->playerX == width && player->playerY == height) ;
        }
};