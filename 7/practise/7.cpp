// arrfun3.cpp
#include <iostream>
const int Max = 5;
// function prototypes
double *  fill_array(double *, int);
void show_array(const double *, const double *);  // don't change data
void revalue(double, double *, double *);

int main()
{
    using namespace std;
    double properties[Max];

    double * size = fill_array(properties, Max);
    show_array(properties, size);
    if (*size > 0)
    {
        cout << "Enter revaluation factor: ";
        double factor;
        while (!(cin >> factor))    // bad input
        {
            cin.clear();
            while (cin.get() != '\n')
                continue;
            cout << "Bad input; Please enter a number: ";
        }
        revalue(factor, properties, size);
        show_array(properties, size);
    }
    cout << "Done.\n";
    cin.get();
    cin.get();
    return 0;
}

double *  fill_array(double * begin, int limit)
{
    using namespace std;
    double temp;
    int i;
    for (i = 0; i < limit; i++)
    {
        cout << "Enter value #" << (i + 1) << ": ";
        cin >> temp;
        if (!cin)   // bad input
        {
            cin.clear();
            while (cin.get() != '\n')
                continue;
            cout << "Bad input; input process terminated.\n";
            break;
        }
        else if (temp < 0)  // signal to terminate
            break;
        begin[i] = temp;
    }
    return begin + i - 1;
}

// the following function can use, but not alter,
// the array whose address is ar
void show_array(const double * begin, const double * end)
{
    using namespace std;
    const double * pt;
    for (pt = begin; pt <= end; pt++)
    {
        cout << "property #" << (pt - begin + 1) << ": $";
        cout << *pt << endl;
    }
}

// multiplies each element of ar[] by r
void revalue(double r, double * begin, double * end)
{
    double * pt;
    for (pt = begin;pt <= end; pt++)
        *pt *= r;
} 