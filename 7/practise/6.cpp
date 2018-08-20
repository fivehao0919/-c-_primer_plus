// 6.cpp
#include <iostream>
using namespace std;
const int Max = 5;
int Fill_array(double [], int n);
void Show_array(double [], int n);
void Reverse_array(double [], int begin, int end);

int main()
{
    double target[Max];
    int size;
    
    size =  Fill_array(target, Max);
    cout << size << endl;
    Show_array(target, size);
    Reverse_array(target, 0 , size-1);
    Show_array(target, size);
    Reverse_array(target, 1 , size - 2);
    Show_array(target, size);
}

int Fill_array(double arr[], int n)
{
    double temp;
    int count = 0;
    cout << "execute Fill_array(): " << endl;
    for (int i = 0;i < n;i++)
    {
        cout << "enter " << i + 1 << " number: ";
        if(!(cin >> temp))
            break;
        arr[i] = temp;
        count++;
    }
    cout <<  "Fill_array END.\n";
    return count;
}


void Show_array(double arr[], int n)
{
    cout << "execute Show_array(): " << endl;
    for (int i = 0;i < n;i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl << "Show_array END.\n";
}

void Reverse_array(double arr[], int begin, int end)
{
    double reverse_tmp;
    cout << "execute Reverse_array(): " << endl;
    while(begin < end)
    {
        cout << arr[begin] << " " << arr[end] << endl;
        reverse_tmp = arr[begin];
        arr[begin] = arr[end];
        arr[end] = reverse_tmp;
        begin++;
        end--;
    }
    cout <<  "Reverse_array END.\n";
}