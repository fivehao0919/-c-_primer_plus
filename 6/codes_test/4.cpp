// 4.cpp
#include <iostream>

int fullname(void);
int title(void);
int bopname(void);
int preference(void);
using namespace std;

const int strsize = 20;
const int arraysize = 5;
// Benevolent Order of Programmers name structure
struct bop {
    char fullname[strsize]; // real name
    char title[strsize];     // job title
    char bopname[strsize];  // secret BOP name
    int preference;         // 0 = fullname, 1 = title, 2 = bopname
};

bop programmers[arraysize] =
    {
        {"Wimp Macho", "DBA", "Wimp", 0},
        {"Raki Rhodes", "OPS", "Raki", 2},
        {"Celia Laiter", "DEV", "Celia", 1},
        {"Hoppy Hipman", "QA", "Hoppy", 0},
        {"Pat Hand", "OPS", "Pat", 1}
    };

int main()
{
    
    

    cout << "Benevolent Order of Programmers Report\n";
    cout << "a. display by name     b. display by title\n";
    cout << "c. display by bopname  d. display by preference\n";
    cout << "q. quit\n";
    cout << "Enter your choice:";
    char ch;
    //cin >> ch;
    while (cin.get(ch) && ch != 'q')
    {
        switch(ch)
        {
            case 'a' : fullname();
                        break;
            case 'b' : title();
                        break; 
            case 'c' : bopname();
                        break; 
            case 'd' : preference();
                        break; 
        }
        cout << "Next choice:";
        cin.clear();
        cin.ignore();
    }
    cout << "Bye!\n";
    return 0;
}

int fullname()
{
    for (int i = 0; i < arraysize; i++)
    {
        cout << programmers[i].fullname << endl;
    }
    return 0;
}

int title()
{
    for (int i = 0; i < arraysize; i++)
    {
        cout << programmers[i].title << endl;
    }
    return 0;
}

int bopname()
{
    for (int i = 0; i < arraysize; i++)
    {
        cout << programmers[i].bopname << endl;
    }
    return 0;
}

int preference()
{
   for (int i = 0; i < arraysize; i++)
    {
        int n;
        n = programmers[i].preference;
        if (n == 0)
           cout << programmers[i].fullname << endl;
        else if (n == 1)
           cout << programmers[i].title << endl;
        else if (n == 2)
           cout << programmers[i].bopname << endl;
        else
           cout << "ERROR\n";
    }
    return 0;
}