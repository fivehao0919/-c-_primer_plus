#include <iostream>
using namespace std;

double calculate(double, double, double (*pf) (double,double));
double add(double, double);
double sub(double, double);


int main()
{
    double (*pf[2])(double, double) = {add, sub};
    double x,y;
    while (cin >> x && cin >> y)
    {
        for (int i = 0;i < 2; i++)
        {
            cout << calculate(x,y,pf[i]) << endl;
        }
    }
    return 0;
}

double add(double x, double y)
{
    return x + y;
}

double sub(double x, double y)
{
    return x - y;
}

double calculate(double x, double y, double (*pf) (double,double))
{
     cout << "1st number: " << x << endl;
     cout << "2st number: " << y << endl;
     cout << "result: ";
     return (*pf) (x, y);
}