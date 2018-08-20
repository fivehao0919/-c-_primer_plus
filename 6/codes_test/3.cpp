// 3.cpp
#include <iostream>
int menu(void);
using namespace std;
int main()
{
    menu();
    char input;
    
    while (cin.get(input) && (input != 'c' && input != 'p' && input != 't' && input != 'g' ))
    {
        cout << "Please enter a c, p, t, or g:";
    }

    switch(input)
    {
        case 'c' : cout << "this is c.\n";
                    break;
        case 'p' : cout << "this is p.\n";
                    break; 
        case 't' : cout << "this is t.\n";
                    break; 
        case 'g' : cout << "this is g.\n";
                    break; 
    }

    return 0;
}

int menu()
{
    cout << "Please enter one of the following choices:\n";
    cout << "c) carnivore           p) pianist\n";
    cout << "t) tree                g) game\n";
    return 0;
}   