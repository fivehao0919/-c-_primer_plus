// textin4.cpp
#include <iostream>
int main(void)
{
    using namespace std;
    int ch;
    int count = 0;
    cout << EOF;
    while ((ch = cin.get()) != EOF)
    {
        cout.put(char(ch));
        ++count;
    }
    cout << endl << count << " characters read\n";
    return 0;
}