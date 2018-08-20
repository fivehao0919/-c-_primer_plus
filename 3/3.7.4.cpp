// 3.7.4.cpp
#include <iostream>
int main()
{
    using namespace std;
    long seconds;
    cout << "Enter the number of seconds: ";
    cin >> seconds;
    cout << seconds << " seconds = " << seconds/60/60/24 << " days, " << seconds/60/60%24 << " hours, " << seconds/60%60 << " minutes, " << seconds%60 << " seconds\n";
    return 0;
}