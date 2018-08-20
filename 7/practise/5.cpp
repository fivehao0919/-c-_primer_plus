// 5.cpp
#include <iostream>
using namespace std;
unsigned long long factorial(int n);


int main()
{
    unsigned int num;
    while (cin >> num)
    {
        cout << factorial(num) << endl;
    }
    return 0;
}

unsigned long long factorial(int n)
{
    if( n == 0)
        return 1;
    else
        return (n * factorial(n-1));
}