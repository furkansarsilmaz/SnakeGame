#include <iostream>
#pragma once

class Meteor{
    public :
        char movement [11][22] ;
    
        void create(){
            int width = ( rand() % 21  ) + 1 ;
            int heigth = ( rand() % 10 ) + 1 ;
            movement[heigth][width] = '@' ;
        }
};