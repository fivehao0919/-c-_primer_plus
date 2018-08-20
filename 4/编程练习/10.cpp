#include <iostream>
#include <array>
using namespace std;

int main()
{
    const unsigned times = 3;
    array<double, times> a1;
    cout << "type 1st time: ";
    cin >> a1[0];
    cout << "type 2st time: ";
    cin >> a1[1];
    cout << "type 3st time: ";
    cin >> a1[2];

    cout << "times: " << times << "\t" << "average: " << (a1[0] + a1[1] + a1[2]) / times << endl;
    return 0;
}