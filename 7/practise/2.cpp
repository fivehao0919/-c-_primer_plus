// golf
#include <iostream>
using namespace std;
int input(double arr[], int size);
void output(double arr[], int size);
void average(double arr[], int size);


int main()
{
    const int size = 10;
    double arr[size];
    int time = input(arr, size);
    output(arr, time);
    average(arr, time);

}

int input(double arr[], int n)
{
    int count = 0;
    for (int i = 0;i < n;i++)
    {
        double tmp;
        cin >> tmp;
        if (tmp < 0)
            break;
        arr[i] = tmp;
        count++;
    }
    return count;
}

void output(double arr[], int n)
{
    for(int i = 0;i < n;i++)
        cout << arr[i] << " ";
    cout << endl;
}

void average(double arr[], int n)
{
    double sum = 0;
    for(int i = 0;i < n;i++)
        sum += arr[i];
    cout << sum /n << endl;
}