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

        void eaten(Player* player,int& playerPoint){
            if (player->playerX == width && player->playerY == height)
            {   
                movement[height][width] = ' ' ;
                create();
                playerPoint += 1 ;
            }
        }
};