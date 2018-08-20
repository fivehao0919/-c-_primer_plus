// randwalk.cpp -- using the Vector class
// compile with the vect.cpp file
#include <iostream>
#include <fstream>
#include <cstdlib>      // rand(), srand() prototypes
#include <ctime>        // time() prototype
#include "vector.h"

int show_highest_step(int * ar, int n);
int show_least_step(int * ar, int n);
int show_average_step(int * ar, int n);

int main()
{
    using namespace std;
    using VECTOR::Vector;
    ofstream fout;
    fout.open("randwalk.txt");
    //fout << "test\n";
    srand(time(0));     // seed random-number generator
    double direction;
    Vector step;
    Vector result(0.0, 0.0);
    unsigned long steps = 0;
    double target;
    double dstep;
    int times;
    int count = 0;
    cout << "Enter the number of tests: ";
    cin >> times;
    int ar_times[times];
    cout << "Enter target distance (q to quit): ";
    while (cin >> target)
    {
        
        cout << "Enter step length: ";
        if (!(cin >> dstep))
            break;
        fout << "Target Distance: " << target << ", Step Size: " << dstep << std::endl;
        while (result.magval() < target)
        {
            fout << steps << ": " << result << std::endl;
            direction = rand() % 360;
            step.reset(dstep, direction, Vector::POL);
            result = result + step;
            steps++;
        }
        cout << "After " << steps << " steps, the subject "
            "has the following location:\n";
        fout << "After " << steps << " steps, the subject "
            "has the following location:\n";
        cout << result << endl;
        fout << result << endl;
        result.polar_mode();
        cout << " or\n" << result << endl;
        fout << " or\n" << result << endl;
        cout << "Average outward distance per step = "
            << result.magval()/steps << endl;
        fout << "Average outward distance per step = "
            << result.magval()/steps << endl;
        ar_times[count] = steps;
        steps = 0;
        result.reset(0.0, 0.0);
        count++;
        if (count == times )
            break;
        cout << "Enter target distance (q to quit): ";
    }
    cout << show_highest_step(ar_times, times) << std::endl;
    cout << show_least_step(ar_times, times) << std::endl;
    cout << show_average_step(ar_times, times) << std::endl;
    cout << "Bye!\n";
    cin.clear();
    while (cin.get() != '\n')
        continue;
    fout.close();
    return 0;
}

int show_highest_step(int * ar, int n)
{
    int temp_highest = 0;
    for (int i = 0; i < n ; i++)
    {
        temp_highest = temp_highest > ar[i] ? temp_highest : ar[i];
    }
    return temp_highest;
}

int show_least_step(int * ar, int n)
{
    int temp_least = ar[0];
    for (int i = 0; i < n ; i++)
    {
        temp_least = temp_least < ar[i] ? temp_least : ar[i];
    }
    return temp_least;
}

int show_average_step(int * ar, int n)
{
    int temp_max = 0;
    for (int i = 0; i < n ; i++)
    {
        temp_max += ar[i];
    }
    return temp_max;
}