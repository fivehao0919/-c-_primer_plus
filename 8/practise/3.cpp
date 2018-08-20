// 3.cpp
#include <iostream>
#include <string>
#include <cctype>

using namespace std;
void upper(string & str);


int main()
{
    string str;
    cout << "Enter a string (q to quit): ";
    while (getline(cin, str))
    {
        if (str == "q")
        {
            cout << "Bye.\n";
            break;
        }
        upper(str);
        cout << "Next string (q to quit): ";
    }
    return 0;
}

void upper(string & str)
{
    for(int i = 0; i < str.size(); i++)
    {
        str[i] = toupper(str[i]);
    }
    cout << str << endl;
}
