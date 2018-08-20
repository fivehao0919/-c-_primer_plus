// mytime0.h -- Time class before operator overloading
#ifndef MYTIME0_H_
#define MYTIME0_H_
#include <iostream>

class Time
{
private:
    int hours;
    int minutes;
public:
    Time();
    Time(int h, int m = 0);
    void AddMin(int m);
    void AddHr(int h);
    void Reset(int h = 0, int m = 0);
    // Time operator+(const Time & t) const;
    friend Time operator+(const Time & t, const Time & ot);
    // Time operator-(const Time & t) const;
    friend Time operator-(const Time & t, const Time & ot);
    // Time operator*(double n) const;

    friend Time operator*(double mult, const Time & t);

    friend std::ostream & operator<<(std::ostream & os, const Time & t);
};

#endif