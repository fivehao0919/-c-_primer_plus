// 1.cpp
#include <iostream>
#include "golf.h"

int main()
{
    Golf g1("wuhao", 5);
    g1.showgolf();
    g1.handicap(10);
    g1.showgolf();

    Golf g2;
    g2.showgolf();
    g2.setgolf();
    g2.showgolf();
}