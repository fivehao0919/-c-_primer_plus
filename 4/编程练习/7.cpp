#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::cin;
using std::endl;

struct pizza
{
    string brand;
    double diameter;
    double weight;
};

int main()
{
    pizza pizzahat;

    cout << "Type brand: ";
    getline(cin, pizzahat.brand);

    cout << "Type diameter: ";
    cin >> pizzahat.diameter;

    cout << "Type weight: ";
    cin >> pizzahat.weight;

    cout << "brand is " << pizzahat.brand << ". diameter is "
         << pizzahat.diameter << ". weight is" << pizzahat.weight
         << endl;
}