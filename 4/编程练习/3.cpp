#include <iostream>
#include <cstring>

int main()
{
    using namespace std;

    const int char_size = 64;

    char Fname[char_size];
    cout << "Enter your first name: ";
    cin.getline(Fname, char_size);

    char Lname[char_size];
    cout << "Enter your last name: ";
    cin.getline(Lname, char_size);

    char * plus = new char [strlen(Fname) + strlen(Lname) + 1];
    strcpy(plus, Lname);
    strcat(plus, ", ");
    strcat(plus, Fname);


    cout << "Here's the information in a single string: " << plus << endl;
    return 0;
}