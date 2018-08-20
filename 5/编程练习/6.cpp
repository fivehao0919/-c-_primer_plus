// 5.cpp
#include <iostream>
const int Month = 12;
const int Years = 3;
int main()
{
    using namespace std;
    int sum_1 = 0;
    int sum_2 = 0;
    int sum_3 = 0;
    const char * array_month[Month] =
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

    int sales[Years][Month];
    int sales_sum[Years] = {0, 0, 0};

    for (int year = 0; year < Years; year++)
    {
        for (int month = 0; month < Month; month++)
        {
            cout << "Type sales on " << array_month[month] << " in " << year + 1 << " year" << endl;
            cin >> sales[year][month];
            cout << "sales on " << array_month[month] << " is " << sales[year][month] << endl;
            sales_sum[year] += sales[year][month]; 
        }
    }

    cout << sales_sum[0] << endl;
    cout << sales_sum[1] << endl;
    cout << sales_sum[2] << endl;
    cout << sales_sum[0] + sales_sum[1] + sales_sum[2] << endl;
    return 0;
}