// 6.cpp
#include <iostream>
#include <vector>
#include <string>
#include <fstream>
using namespace std;

const int SIZE = 60;
int strsize;
struct contribution {
    string name;
    double money;
    int flag;
};

int main()
{
    //char filename[SIZE] = "9.txt";
    ifstream inFile;    // object for handing file input
    //ifstream fin;
    //cout << "Enter name of data file: ";
    //cin.getline(filename, SIZE);
    inFile.open("9.txt");
    if (!inFile.is_open())
    {
        cout << "Could not open the file " << "9.txt" << endl;
        cout << "Program terminating.\n";
        exit(EXIT_FAILURE);
    }
    //char line [81];
    /*
    inFile.getline(line, 81);
    cout << line << endl;
    inFile.getline(line, 81);
    cout << line << endl;
    */
    
    
    cout << "Enter the number of contribution: ";
    unsigned int arraySize;
    int GP = 0;
    inFile >> arraySize;
    cout << arraySize << endl;
    
    contribution *legal = new contribution[arraySize];
    //cout << "Input right\n";
    for (int i = 0;i < arraySize; i++)
    {
        inFile.get();
        cout << "Enter the " << i + 1 << " name of the contribution: ";
        getline(inFile, (legal + i)->name);
        cout << (legal + i)->name << endl;
        cout << "Enter the " << i + 1 << " money of the contribution: ";
        inFile >> (legal + i)->money;
        cout << (legal + i)->money << endl;
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
    
    inFile.close();
    return 0;
}
