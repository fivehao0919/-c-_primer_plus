// arrobj.cpp -- functions with array objects (C++11)
#include <iostream>
#include <string>
// constant data
const int Seasons = 4;
//const std::array<std::string, Seasons> Snames =
//     {"Spring", "Summer", "Fall", "Winter"};
const char  * Snames[Seasons] = {"Spring", "Summer", "Fall", "Winter"};

struct money
{
    double expenses[Seasons];
};

// function to mofify array object
void fill (double [], int n);
// function that uses array object without modifying it
void show(double [], int n);

int main()
{
    double expenses[Seasons];
    money Smoney;
    fill(Smoney.expenses, Seasons);
    show(Smoney.expenses, Seasons);
    return 0;
}

void fill(double arr[], int n)
{
    using namespace std;
    for (int i = 0; i < n; i ++)
    {
        cout << "Enter " << Snames[i] << " expenses: ";
        cin >> arr[i];
    }
}

void show(double arr[], int n)
{
    using namespace std;
    double total = 0.0;
    cout << "\nEXPENSES\n";
    for (int i = 0; i < n; i++)
    {
        cout << Snames[i] << ": $" << arr[i] << endl;
        total += arr[i];
    }
    cout << "Total Expenses: $" << total << endl;
}