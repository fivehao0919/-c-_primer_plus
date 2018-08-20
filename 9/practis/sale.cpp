#include <iostream>
#include "sale.h"

void SALES::setSales(Sales & s, const double ar[], int n)
{
    if ( n > QUARTERS)
    {
        std::cout << "Array out of bounds!!!";
        return;
    }
    for(int i = 0; i < QUARTERS; i++)
    {
        //s.min = 0;
        if(i < n)
            s.sales[i] = ar[i];
        else
            s.sales[i] = 0;
        s.max = s.max > s.sales[i] ? s.max : s.sales[i];
        s.min = s.min < s.sales[i] ? s.min : s.sales[i];
        s.average = (s.average += s.sales[i]) / QUARTERS;
    }
    return;
}

void SALES::setSales(Sales & s)
{
    int n;
    std::cout << "Hot many items do you want? ";
    std::cin >> n;
    double ar[n];
    for(int i = 0; i < n; i++)
    {
        std::cout << "type " << i + 1 << ": ";
        std::cin >> ar[i];
    }
    SALES::setSales(s, ar, n);
    return;
}

void SALES::showSales(const Sales & s)
{
    std::cout << "sales: ";
    for(int i = 0; i < QUARTERS; i++)
        std::cout << s.sales[i] << " ";
    std::cout << std::endl;
    std::cout << "average: " << s.average << std::endl;
    std::cout << "min: " << s.min << std::endl;
    std::cout << "max: " << s.max << std::endl;
    return;
}