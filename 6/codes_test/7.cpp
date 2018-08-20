// cctypes.cpp
#include <iostream>
#include <cctype>
#include <string>
int main()
{
    using namespace std;
    cout << "Enter text for analysis, and type q to terminate input.\n";
    string word;
    int vowel = 0; // 元音
    int consonant = 0; // 辅音
    int others = 0;

    while (cin >> word)
    {
        if (word[0] == 'q' && word[1] == 0)
            break;
        if ((word[0] == 'a'||'A') && (word[0] == 'e'||'E') && (word[0] == 'i'||'I') && (word[0] == 'o'||'O') && (word[0] == 'u'||'U'))
            vowel++;
        else if ((word[0] > 'a' && word[0] < 'z') && (word[0] > 'A' && word[0] < 'Z'))
            others++;
    }

    cout << vowel << "vowel\n";
    cout << consonant << "consonant\n";
    cout << others << "others\n";
    return 0;
}