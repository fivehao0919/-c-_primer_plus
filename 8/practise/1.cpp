// 1.cpp
#include <iostream>
using namespace std;
const int SIZE = 50;

void printt(const char * ch, int n = 0);

int main()
{
    char ch1[SIZE] = "test";
    //printt(ch1);
    //printt(ch1);
    printt(ch1,1);

    return 0;
}

void printt(const char * ch, int n)
{
    static int times = 1;
    
    if (n)
        for ( int i = 0; i < times; i++)
            cout << ch << endl;
    else
        cout << ch << endl;
    times++;
}