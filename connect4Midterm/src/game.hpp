#include <iostream>
#include "check.hpp"

namespace game{
    void map()
    { //where 0 indicates no piece, 1 = red piece, 2 = blue piece
        int g = 6;
        for(int i = 5;i > -1; i--){
            std::cout << '|';
            for(int j = 0; j< 7; j++){
                std::cout << gameLang(place[j][i]) << '|'; 
            }
            std::cout << std::endl;
        }

        std::cout << "  ";
        for(int i = 1; i< 8; i++){
            std::cout << i << "  ";  
        }
    }
    
    void play1(int x)
    {
        x--;
        int y = 0;
        while(place[x][y] != 0){
            y++; 
        }
        system("cls"); //cls if windows, clear if replit
        place[x][y] = 1; 
        map();
    }

    void play2(int x)
    { //test if column is actually available
        x--;
        int y = 0;
        while(place[x][y] != 0){
            y++; 
        }
        system("cls"); //cls if windows, clear if replit
        place[x][y] = 2; 
        map();
    }

   void play()
   {
        int x = 0;
        bool g = false;

        for(int i = 0; i < 22; i++){ //do
            do{
                std::cin >> x;  
                if(check::columnAvailable(x) == 0){
                    std::cout << std::endl << "Column (" << x << ") is not available, try again" << std::endl;
                }
            }
            while(check::columnAvailable(x) == 0);
            play1(x); 
            if(check::verticalCheck(x) != 0 || check::horizontalCheck(x) != 0){
                g = true;
                break; 
            }

            do{
                std::cin >> x;
                if(check::columnAvailable(x) == 0){
                    std::cout << std::endl << "Column (" << x << ") is not available, try again" << std::endl;
                }
            }
            while(check::columnAvailable(x) == 0);
            play2(x); 
            if(check::verticalCheck(x) != 0 || check::horizontalCheck(x) != 0){
                g = true;
                break; 
            }
        }

        if(g == true){
            if(check::verticalCheck(x) != 0){
                std::cout << "Player " << check::verticalCheck(x) << " won!";
            }
            else if(check::horizontalCheck(x) != 0){
                std::cout << "Player " << check::horizontalCheck(x) << " won!";
                
            }
        }
        else{
            std::cout << "Draw!";
        }
    }
};
