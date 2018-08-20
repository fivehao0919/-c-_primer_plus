#include <iostream>
#include "sale.h"

namespace SALES{

Sales::Sales(const double ar[], int n)
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
            sales[i] = ar[i];
        else
            sales[i] = 0;
        max = max > sales[i] ? max : sales[i];
        min = min < sales[i] ? min : sales[i];
        average = (average += sales[i]) / QUARTERS;
    }
}

Sales::Sales()
{
    for(int i = 0; i < QUARTERS; ++i)
        sales[i] = 0.0;
    average = 0.0;
    max = 0.0;
    min = 0.0;
}

void Sales::setSales()
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
    Sales sales_tmp(ar, n);
    *this = sales_tmp;
    return;
}

void Sales::showSales() const
{
    std::cout << "sales: ";
    for(int i = 0; i < QUARTERS; i++)
        std::cout << sales[i] << " ";
    std::cout << std::endl;
    std::cout << "average: " << average << std::endl;
    std::cout << "min: " << min << std::endl;
    std::cout << "max: " << max << std::endl;
    return;
}
}