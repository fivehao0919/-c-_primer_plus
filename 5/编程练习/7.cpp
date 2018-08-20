// 7.cpp
#include <iostream>
#include <string>

using std::string;
using std::cin;
using std::cout;
using std::endl;
struct car {
    string producer;
    unsigned int year;
};

int main()
{
    int cat_amount;
    cout << "How many cars do you wish to catalog? ";
    cin >> cat_amount;
    cin.get();

    car * pcar = new car[cat_amount];

    for (int i = 0; i < cat_amount; i++)
    {
        cout << "Car #" << i + 1 << ":\n";
        cout << "Please enter the make: ";
        getline(cin, pcar[i].producer);
        
        cout << "Please enter the year made: ";
        cin >> pcar[i].year;
        cin.get();
    }
    cout << "Here is your collection:\n";
    for (int i =0; i < cat_amount; i++)
    {
        cout << pcar[i].year << " " << pcar[i].producer << endl;
    }

    delete [] pcar;
    pcar = NULL;

    return 0;
}