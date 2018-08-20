// golf.cpp
#include <iostream>
#include "golf.h"
#include <cstring>

void setgolf(golf & g, const char * name, int hc)
{
    strcpy(g.fullname, name);
    g.handicap = hc;
    return;
}

int setgolf(golf & g)
{
    char name[Len];
    int handicap_tmp;
    std::cout << "Please type your name: ";
    std::cin.getline(name, Len);
    std::cout << "Please type your handicap: ";
    std::cin >> handicap_tmp;
    setgolf(g, name, handicap_tmp);
    if(g.fullname[0] != '\0')
        return 1;
    else
        return 0;
}

void handicap(golf & g, int hc)
{
    g.handicap = hc;
    return;
}

void showgolf(const golf & g)
{
    std::cout << "name: " << g.fullname << ", handicap: " << g.handicap << std::endl;
    return;
}