// 1.cpp
#include <iostream>
#include "golf.h"

int main()
{
    golf gf[3];
    for (int i = 0; i < 3; i++)
    {
        setgolf(gf[i]);
        showgolf(gf[i]);
        handicap(gf[i], 10);
        showgolf(gf[i]);
        std::cin.get();
        if(gf[i].fullname[0] == '\0')
            break;
    }
    return 0;
}