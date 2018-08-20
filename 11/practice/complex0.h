#include <iostream>
#ifndef COMPLEX0_H_
#define COMPLEX0_H_

class Complex
{
private:
    double real;
    double unreliable;
public:
    Complex();
    Complex(double x, double y);
    ~Complex();

    Complex operator+(Complex & a) const;
    Complex operator-(Complex & a) const;
    Complex operator*(Complex & a) const;
    Complex operator*(double n) const;
    Complex operator~() const;

    friend Complex operator*(double n, const Complex & a);
    friend std::istream &
                operator>>(std::istream & os, Complex & v);
    friend std::ostream &
                operator<<(std::ostream & os, const Complex & v);
};

#endif