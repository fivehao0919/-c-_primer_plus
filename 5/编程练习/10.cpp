// 10.cpp
#include <iostream>
#include <string>
int main()
{
    using namespace std;
    cout << "Enter number of rows: ";
    int rows;
    cin >> rows;
    for (int i = 1; i <= rows;i++)
    {
        for (int x = (rows - i); x > 0; x--)
        {
            cout << ".";
        }
        for (int y = 1; y <= i; y++)
        {
            cout << "*";
        }
        cout << "\n";
    }
}