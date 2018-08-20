// 4.cpp
#include <iostream>
#include <cstring>  // for strlen(), strcpy()
using namespace std;
        
struct stringy
{
    char * str;     // points to a string
    int ct;         // length of string (not counting '\0')
};

void show(const stringy & re, int times = 1);
void show(const char * ch, int times = 1);
void set(stringy & re, const char * ch);

// prototypes for set(), show(), and show() go here
int main()
{
    stringy beany;
    char testing[] = "Reality isn't what it used to be.";

    set(beany, testing);        // first argument is a reference,
                                // allocates space to hold copy of testing,
                                // sets str member of beany to point to the
                                // new block, copies testing to new block,
                                // and sets ct member of beany
    show(beany);        // prints member string once
    show(beany, 2);     // prints member string twice
    testing[0] = 'D';
    testing[1] = 'u';
    show(testing);      // prints testing string once
    show(testing, 3);   // prints testing string thrice
    show("Done!");
    cout << beany.ct << endl;
    return 0;
}

void show(const stringy & re, const int times)
{
    for(int i = 0; i < times; i++)
        cout << re.str << endl;
}

void show(const char * ch, const int times)
{
    for(int i = 0; i < times; i++)
        cout << ch << endl;
}

void set(stringy & re, const char * ch)
{
    int size = strlen(ch);
    re.str = new char [size];
    strcpy(re.str, ch);
    re.ct = size;
}