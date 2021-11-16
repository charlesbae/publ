#include <iostream>
#include "data.hpp"

namespace check{ //returns player number who won (if true) else returns 0 
    bool columnAvailable(int x) //1 = available; 0 = !(available)
    {
        x--;
        if(place[x][5] == 0){
            return 1;
        }
        else{
            return 0;
        }
    }

    int verticalCheck(int x)
    { 
        x--;
        bool g;
        int p;
        for(int j = 0; j < 3; j++){
            if(place[x][j + 1] == place[x][j] && place[x][j + 2] == place[x][j] && place[x][j + 3] == place[x][j]){
                g = true;
                p = place[x][j];  
                break;
            }
        }
        if(g == true){
            return p; 
        }
        else{
            return 0;
        }
    }

    int horizontalCheck(int x)
    {
        x--;
        bool g;
        int p, i = 0;
        while(place[x][i] != 0 && i <= 5){
            i++;
        }
        i--;

        for(int j = 0; j < 4; j++){
            if(place[j + 1][i] == place[j][i] && place[j + 2][i] == place[j][i] && place[j + 3][i] == place[j][i]){
                g = true;
                p = place[j][i];
                break;
            }
        }

        if(g == true){
            return p; 
        }
        else{
            return 0;
        }
    }

    /*
    int diagonalCheck()
    {

    }
    */

    
};