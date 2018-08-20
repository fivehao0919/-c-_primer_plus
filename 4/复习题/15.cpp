#include <iostream>
#include <string>

struct fish
{
    char variety[30];
    int weight;
    double length;
};

int main()
{
    using namespace std;
    fish f01;
    fish * pa = &f01;
    cout << "Enter the kind of fish: ";
    cin >> pa->variety;
    cout << "Enter the weight of fish: ";
    cin >> pa->weight;
    cout << "Enter the length of fish: "; 
    cin >> pa->length;
    cout << f01.variety << endl;
    cout << f01.weight << endl;
    cout << f01.length << endl;
    return 0;
}