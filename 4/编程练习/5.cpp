#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::endl;

struct CandyBar
{
    string brand;
    float weight;
    int calorie;
};

int main()
{
    struct CandyBar snack = {"Mocha Munch", 2.3, 350};
    cout << "brand is " << snack.brand << endl;
    cout << "weight is " << snack.weight << endl;
    cout << "calorie is " << snack.calorie << endl;
    return 0;
}