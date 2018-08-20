// 8.cpp
#include <iostream>
#include <cstring>
#include <string>
int main()
{
    using namespace std;
    const int size = 64;
    char words[size];
    const char* const	k_szDone = "done";
    int count = 0;

    cout << "Enter words (to stop, type the word done):\n";
    cin >> words;
    while(strcmp(k_szDone, words))
    {
        cin >> words;
        count++;
    }

    cout << "You entered a total of " << count << "words.";
    return 0;
}