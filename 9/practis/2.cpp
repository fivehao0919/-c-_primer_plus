// static.cpp -- using a static local variable
#include <iostream>
#include <string>
using namespace std;
// constants
const int Arsize = 10;
// function prototype
void strcount(const string str);

int main()
{
    
    string input;
    //char input[Arsize];
    //char next;

    cout << "Enter a line:\n";
    getline(cin, input);
    while(input != "")
    {
        /*cin.get(next);
        while (next != '\n')    // string didn't fit!
            cin.get(next);*/     // dispose of remainder
        strcount(input);
        cout << "Enter next line (empty line to quit):\n";
        getline(cin, input);
    }
    cout << "Bye\n";
    return 0;
}

void strcount(const string str)
{
    using namespace std;
    static int total = 0;       // static local variable
    int count = 0;              // automatic local variable

    cout << "\"" << str << "\" contains ";
    //while (*str++)              // go to end of string
        //count++;
    count = str.length();
    total += count;
    cout << count << " characters\n";
    cout << total << " characters total\n";
}