// 3.7.6.cpp
#include <iostream>
int main()
{
    using namespace std;
    double distance_mile, gas_gallon;
    cout << "Enter the drive mileage: ";
    cin >> distance_mile;
    cout << "Enter the consumed gasoline: ";
    cin >> gas_gallon;
    cout << "With a gallon of gasoline, it can run" << distance_mile/gas_gallon << "kilometers.\n";
    return 0;
}