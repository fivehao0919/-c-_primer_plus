// stonewt.cpp -- Stonewt methods
#include <iostream>
using std::cout;
#include "stonewt.h"

// construct Stonewt object from double value
Stonewt::Stonewt(double lbs, Mode s)
{
    stone = int (lbs) / Lbs_per_stn;        // integer division
    pds_left = int (lbs) % Lbs_per_stn + lbs - int(lbs);
    pounds = lbs;
    status = s;
}

// construct Stonewt object from stone, double values
Stonewt::Stonewt(int stn, double lbs, Mode s)
{
    stone = stn;
    pds_left = lbs;
    pounds = stn * Lbs_per_stn + lbs;
    status = s;
}

Stonewt::Stonewt()      // default constructor, wt = 0
{
    stone = pounds = pds_left = 0;
    status = STN;
}

Stonewt::~Stonewt()     // destructor
{
}
// show weight in stones
/*
void Stonewt::show_stn() const
{
    cout << stone << " stone, " << pds_left << " pounds\n";
}

// show weight in pounds
void Stonewt::show_lbs() const
{
    cout << pounds << " pounds\n";
}
*/

void Stonewt::set_status(Mode m)
{
    status = m;
}

Stonewt Stonewt::operator+(const Stonewt & st) const
{
    double pds_sum = pounds + st.pounds;
    Stonewt sum(pds_sum);
    return sum;
}

bool Stonewt::operator>=(const Stonewt & st) const
{
    if ( pounds >= st.pounds)
        return true;
    else
        return false;
}

bool Stonewt::operator<=(const Stonewt & st) const
{
    if ( pounds <= st.pounds)
        return true;
    else
        return false;
}

Stonewt Stonewt::operator-(const Stonewt & st) const
{
    double pds_diff = pounds - st.pounds;
    Stonewt diff(pds_diff);
    return diff;
}

Stonewt Stonewt::operator*(double n) const
{
    double pds_mult = pounds * n;
    Stonewt mult(pds_mult, status);
    return mult;
}



std::ostream & operator<<(std::ostream & os, const Stonewt & v)
{
    if (v.status == Stonewt::STN)
        cout << v.stone << " stone, " << v.pds_left << " pounds\n";
    else if (v.status == Stonewt::PDS)
        cout << v.pounds << " pounds\n";
    else
        std::cout << "Incorrect status";
    return os;
}