// 5.cpp
#include <iostream>
const int Month = 12;
int main()
{
    using namespace std;
    const char * month[Month] =
    {
        "January",
        "February",
        "March",
        "April",
        "May",
        "June",
        "July",
        "August",
        "September",
        "October",
        "November",
        "December"
    };

    int sales[Month];

    for (int i = 0; i < Month; i++)
    {
        cout << "Type sales on " << month[i] << endl;
        cin >> sales[i];
        cout << "sales on " << month[i] << " is " << sales[i] << endl;
    }

    int sum = 0;
    for (int i = 0; i < Month; i++)
    {
        sum += sales[i];
    }
    cout << "The total sales this year are " << sum << endl;
    return 0;
}