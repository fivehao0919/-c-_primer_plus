// 6.cpp
#include <iostream>
#include <vector>
#include <string>
using namespace std;
int strsize;
struct contribution {
    string name;
    double money;
    int flag;
};

int main()
{
    cout << "Enter the number of contribution: ";
    unsigned int arraySize = 0;
    int GP = 0;
    while (!(cin >> arraySize))
    {
        cout << arraySize << endl;
        cout << "Input error!!\n";
        cout << "Enter the number of contribution: ";
        cin.clear();
        cin.ignore();
    }
    contribution *legal = new contribution[arraySize];
    //cout << "Input right\n";
    for (int i = 0;i < arraySize; i++)
    {
        cin.get();
        cout << "Enter the " << i + 1 << " name of the contribution: ";
        getline(cin, (legal + i)->name);
        cout << "Enter the " << i + 1 << " money of the contribution: ";
        cin >> (legal + i)->money;
        if ((legal + i)->money > 10000)
        {    
            (legal + i)->flag = 1;
            GP++;
        }
        else 
            (legal + i)->flag = 0;
    }

    if ( GP==0 )
    {
        cout << "Grand Patrons:\n";
        cout << "none\n";
        cout << "Patrons:\n";
        for (int i = 0;i < arraySize; i++)
        {
           cout << (legal + i)->name << ' ' << (legal + i)->money << endl; 
        }
    }
    else if ( GP > 0 && GP < arraySize)
    {
        for (int i = 0;i < arraySize; i++)
        {

            if ((legal + i)->flag == 1)
            {
                cout << "Grand Patrons:\n";
                cout << (legal + i)->name << ' ' << (legal + i)->money << endl;
            }
            else
            {
                cout << "Patrons:\n";
                cout << (legal + i)->name << ' ' << (legal + i)->money << endl;
            }
        }
    }
    else
    {
        cout << "Grand Patrons:\n";
        for (int i = 0;i < arraySize; i++)
        {
            cout << (legal + i)->name << ' ' << (legal + i)->money << endl;
        }
        cout << "Patrons:\n";
        cout << "none\n";
    }
    return 0;
}
