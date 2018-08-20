// comstr2.cpp
#include <iostream>
#include <string>
int main()
{
    using namespace std;
    string word = "?ate";
    for (char ch = 'a'; word != "mate"; ch++)
    {
        cout << word << endl;
        word[0] = ch;
    }
    cout << "After loop end, word is " << word << endl;
    return 0;
}