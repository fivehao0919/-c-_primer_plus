// 5.cpp
#include <iostream>
#include <cctype>
using namespace std;
double tax(int);

int main()
{
    double n;
    cout << "Enter a digit:";
    while (cin >> n && n > 0)
    {
        cout << tax(n) << endl;
        cout << "Enter a digit:";
    }
    cout << "Error!!!\n";
    
    return 0;
}

double tax(int n)
{
    double tax = 0;
    if ( n > 35000)
    {
        tax = 1000 + 3000 + (n - 35000) * 0.20;
        cout << "tax is ";
        return tax;
    }
    else if ( n > 15000 &&  n <= 35000 )
    {
        tax = 1000 + (n - 15000) * 0.15;
        cout << "tax is ";
        return tax;
    }
    else if ( n > 5000 && n <= 15000)
    {
        tax = (n - 5000) * 0.12;
        cout << "tax is ";
        return tax;
    }
    else
        cout << "tax is ";
        return tax;
}