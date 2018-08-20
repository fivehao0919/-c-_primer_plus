// golf.cpp
#include <iostream>
#include <cstring>
#include "golf.h"

Golf::Golf(const char * name, int hc)
{
    strcpy(fullname_, name);
    handicap_ = hc;
}


void Golf::setgolf()
{
    char name[Len];
    int handicap_tmp;
    std::cout << "Please type your name: ";
    std::cin.getline(name, Len);
    std::cout << "Please type your handicap: ";
    std::cin >> handicap_tmp;
    Golf temp_golf(name, handicap_tmp);
    *this = temp_golf;
}


void Golf::handicap(int hc)
{
    handicap_ = hc;
    return;
}

void Golf::showgolf() const
{
    std::cout << "name: " << fullname_ << ", handicap: " << handicap_ << std::endl;
    return;
}