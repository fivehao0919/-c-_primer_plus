// struct fish
#include <iostream>
#include <string>

using namespace std;

struct fish
{
    string variety;
    int weight;
    double length;
};

int main()
{
    fish tuna = {"tuna", 10, 12.11};
    cout << "The fish is " << tuna.variety << endl;
    cout << "It's weight is " << tuna.weight << endl;
    cout << "It's length is " << tuna.length << endl;
    return 0;
}