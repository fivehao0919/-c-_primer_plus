// waiting.cpp
#include <iostream>
#include <ctime>
int main()
{
    using namespace std;
    cout << "Enter the delay time, in seconds: ";
    float secs;
    cin >> secs;
    clock_t delay = secs * CLOCKS_PER_SEC;
    cout << "starting\a\n";
    clock_t start = clock();
    while (clock() - start < delay)
        cout << "now: " << clock() << endl;
        cout << "diff: " << clock() - start << endl; 
    cout << "done \a\n";
    return 0;
}