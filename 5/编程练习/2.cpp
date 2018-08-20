// 2.cpp
#include <iostream>
#include <array>
using std::array;
const int ArSize = 16;
int main()
{
    //long long factorials[ArSize];
    array<long double, ArSize> factorials;
    factorials[1] = factorials[0] = 1;
    for (int i = 2; i < ArSize; i++)
        factorials[i] = i * factorials[i-1];
    for (int i = 0; i < ArSize; i++)
        std::cout << i << "! = " << factorials[i] << std::endl;
    return 0;
}