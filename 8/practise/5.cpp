// 5.cpp
#include <iostream>
using namespace std;

template <typename T>
void max5(T arr[5]);

int main()
{
    int arr1[5] = {1, 2, 3, 4, 5};
    double arr2[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
    max5(arr1);
    max5(arr2);
    return 0;
}

template <typename T>
void max5(T arr[5])
{
    T max = 0;
    for(int i = 0; i < 5; i++)
        max = arr[i] > max ? arr[i] : max;
    cout << max << endl;
}