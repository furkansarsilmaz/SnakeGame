#include <iostream>

class Board {
    private :
        int width = 23 ;
        int height = 11 ;
    public :
        void draw(){
            for (int i = 0; i < width; i++)
            {
                std::cout << '#' ;
            }
            std::cout << std::endl ;
            for (int i = 0; i < height; i++){
                for (int j = 0; j < width; j++){
                    if (j == 0 || j == 22){
                        std::cout << '#' ;
                    }else{
                        std::cout << ' ' ;
                    }
                }
                std::cout << std::endl ; 
            }
            for (int i = 0; i < width; i++)
            {
                std::cout << '#' ;
            }
            
        }
};

int main(){
    Board board;
    board.draw();
    return 0 ;
}