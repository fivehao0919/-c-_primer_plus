// 1.cpp
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
    cout << "Type 1st int: ";
    int num_start;
    cin >> num_start;
    cout << "Type 2nd int: ";
    int num_end;
    cin >> num_end;
    int num_sum = 0;
    for (int i = num_start; i <= num_end; i++)
    {
        num_sum += i;
    }
    cout << num_sum << endl;
    return 0;
}