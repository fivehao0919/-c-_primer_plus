// golf.h -- for pe9-1.cpp
#include <iostream>
#ifndef GOLF_H_
#define GOLF_H_

class Golf{
private:
    static const int Len = 40;
    char fullname_[Len];
    int handicap_;
public:
    Golf(const char * name = "no name", int hc = 0);
    void setgolf();
    void handicap(int hc);
    void showgolf() const;
};

#endif