#include <iostream>
#include "stonewt.h"

int main()
{
    Stonewt st_11(154);
    Stonewt st[6] = {Stonewt(100.11), Stonewt(200.22), Stonewt(2, 100.1)};
    for ( int i = 3; i < 6; i++)
    {
        double temp_lbs;
        int stn;
        std::cout << "Enter stn: ";
        std::cin >> stn;
        std::cout << "Enter lbs: ";
        std::cin >> temp_lbs;
        st[i] = Stonewt(stn, temp_lbs);
    }
    Stonewt pounds_max = st[0];
    Stonewt pounds_min = st[0];
    int count = 0;
    for (int i = 0; i < 6; i++)
    {
        pounds_max = pounds_max >= st[i] ? pounds_max : st[i];
        pounds_min = pounds_min <= st[i] ? pounds_min : st[i];
        if (st[i] >= st_11)
            count++;
    }
    std::cout << pounds_max << std::endl;
    std::cout << pounds_min << std::endl;
    std::cout << count << std::endl;
    return 0;
} 