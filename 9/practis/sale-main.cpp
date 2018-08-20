#include <iostream>
#include "sale.h"
using namespace SALES;

int main()
{
    Sales sa[2];
    double ar[4] = {1.1, 2.2, 3.3};
    SALES::setSales(sa[0], ar, 4);
    showSales(sa[0]);
    SALES::setSales(sa[1]);
    showSales(sa[1]);
    return 0;
}