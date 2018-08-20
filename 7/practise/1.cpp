// Harmonic mean
#include <iostream>
double harmonic_mean(double x, double y);

int main()
{
    using namespace std;
    int num1,num2;
    cin >> num1 >> num2;
    while(num1 != 0 && num2 != 0)
    {
        cout << harmonic_mean(num1,num2) << endl;
        cin >> num1 >> num2;
    }
    return 0;
}


double harmonic_mean(double x, double y)
{
    double result;
    result = 2.0 * x * y/(x + y);
    return result;
}