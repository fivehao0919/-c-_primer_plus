// stone.cpp -- user-defined conversions
// compile with stonewt.cpp
#include <iostream>
using std::cout;
#include "stonewt1.h"

int main()
{
    using std::cout;
    Stonewt poppins(10, 8);        // 9 stone, 2.8 pounds
    cout << (int(poppins) * 2).stone << std::endl;
    return 0;
}