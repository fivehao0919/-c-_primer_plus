#include <iostream>
#ifndef NIFTY_H_
#define NIFTY_H_

class Nifty
{
private:
    char * personality;
    int talents;
public:
    Nifty();
    Nifty(char * s);
    Nifty::~Nifty();
    friend std::ostream & operator<<(std::ostream & os, Nifty & n);
};

#endif