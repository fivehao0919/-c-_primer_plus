#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::string;
using std::endl;

int main()
{
    string Fname;
    cout << "What is your first name? ";
    getline(cin, Fname);

    string Lname;
    cout << "What is your last name? ";
    cin >> Lname;

    char grade; 
    cout << "What letter grade do you deserve? ";
    cin >> grade;

    int age;
    cout << "What is your age? ";
    cin >> age;

    cout << "Name: " << Lname << ", " << Fname << endl;
    cout << "Grade: " << char(grade + 1) << endl;
    cout << "Age: " << age << endl;
}
