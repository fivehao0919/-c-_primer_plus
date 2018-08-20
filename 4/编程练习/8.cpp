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
    pizza * ps = new pizza;

    cout << "Type brand: ";
    getline(cin, ps->brand);

    cout << "Type diameter: ";
    cin >> (*ps).diameter;

    cout << "Type weight: ";
    cin >> ps->weight;

    cout << "brand is " << ps->brand << ". diameter is "
     << ps->diameter << ". weight is " << ps->weight
         << endl;
}