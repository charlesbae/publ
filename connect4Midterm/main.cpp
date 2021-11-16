#include <iostream>
#include "src/game.hpp"
#include "src/start.hpp"

int main() 
{
    int n;
    startMsg(); 
    std::cin >> n;

    switch(n)
    {
        case 1:
        system("cls");
        game::map();
        game::play(); 
        break;
        //case 2:

        case 3:
        std::cout << "Bye!"; 
        break; 
    }
} 