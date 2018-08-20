#include <iostream>
#include "complex0.h"

Complex::Complex()
{
    real = 0.0;
    unreliable = 0.0;
}

Complex::Complex(double x, double y)
{
    real = x;
    unreliable = y;
}

Complex::~Complex()
{
}

Complex Complex::operator+(Complex & a) const
{
    double real_sum = real + a.real;
    double unreliable_sum = unreliable + a.unreliable;
    Complex sum(real_sum, unreliable_sum);
    return sum;
}

Complex Complex::operator-(Complex & a) const
{
    double real_diff = real - a.real;
    double unreliable_diff = unreliable - a.unreliable;
    Complex diff(real_diff, unreliable_diff);
    return diff;
}

Complex Complex::operator*(Complex & a) const
{
    double real_mult = real * a.real - unreliable * a.unreliable;
    double unreliable_mult = real * a.unreliable + unreliable * a.real;
    Complex mult(real_mult, unreliable_mult);
    return mult;
}

Complex Complex::operator*(double n) const
{
    double real_mult = real * n;
    double unreliable_mult = unreliable * n;
    Complex mult(real_mult, unreliable_mult);
    return mult;
}

Complex Complex::operator~() const
{
    Complex con(real, -unreliable);
    return con;
}

Complex operator*(double n, const Complex & a)
{
    return a * n;
}

std::ostream & operator<<(std::ostream & os, const Complex & t)
{
    os << "("<< t.real << ", " << t.unreliable << "i)";
    return os;
}

std::istream & operator>>(std::istream & os, Complex & t)
{
    std::cout << "real: ";
    if(os >> t.real)
    {
        std::cout << "imaginary: ";
        os >> t.unreliable;
    }
    return os;
}