// 3.7.3.cpp
#include <iostream>
int main()
{
    using namespace std;
    double degree, minute, second;
    const int minute_to_degree = 60, second_to_degree= 3600; 
    cout << "Enter a latitude in degrees, minutes, and seconds: \n";
    cout << "First, enter the degrees: ";
    cin >> degree;
    cout << "Next, enter the minutes of arc: ";
    cin >> minute;
    cout << "Finally, enter the seconds of arc: ";
    cin >> second;
    cout << degree << " degrees, " << minute << " minutes, " << second << " seconds = " << degree + minute/minute_to_degree + second/second_to_degree << " degrees\n";
}