#include <iostream>
#include "sale.h"
using namespace SALES;

int main()
{
    
    double ar[4] = {1.1, 2.2, 3.3};
    Sales s1(ar, 4);
    s1.showSales();
    Sales s2;
    s2.showSales();
    s2.setSales();
    s2.showSales();
    return 0;
}