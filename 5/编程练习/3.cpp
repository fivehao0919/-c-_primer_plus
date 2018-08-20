// 3.cpp
#include <iostream>
using std::cin;
using std::cout;
using std::endl;
int main()
{
    int num;
    int sum = 0;
    do
    {
        cin >> num;
        sum += num;
        cout << "sum them :" << sum << endl;
    } while (num != 0);
    return 0;
}