#include <iostream>

int place[7][6];

std::string gameLang(int n)
{
    std::string g;
    switch(n)
    {
        case 0:
        g = "⚫";
        break;
        case 1:
        g = "🔴";
        break;
        case 2:
        g = "🔵";
        break;
    }

    return g;
}