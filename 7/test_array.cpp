// test_array
#include <iostream>
using namespace std;
double f3(const  double [], int);

int main()
{
    double arr[5] = {1.1,2.2,3.3,4.4,5.5};
    cout << f3(arr,5);
}

double f3(const double arr[], int size)
{
    double max = 0;
    for(int i = 0; i < size;i++)
    {
        if(arr[i] > max)
            max = arr[i];
    }
    return max;
}