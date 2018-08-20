// 1.cpp
#include <iostream>
#include <cctype>
int main()
{
    using namespace std;
    char ch;
    cin.get(ch);
    while (ch != '@')
    {
        if (isalpha(ch))
        {
            if (ch >= 'a' && ch <= 'z')
                ch = toupper(ch);
            else
                ch = tolower(ch);
        }
        cout << ch;
        cin.get(ch);
    }
    return 0;
}