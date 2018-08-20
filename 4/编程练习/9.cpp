// 6.cpp
#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::cin;
using std::endl;

struct TCandyBar
{
    string brand;
    float weight;
    int calorie;
};

int main()
{
    const unsigned k_candybar_num = 3;
    TCandyBar * candybar_list = new TCandyBar [k_candybar_num];

    candybar_list[0].brand = "aaa";
    candybar_list[0].weight = 111.1;
    candybar_list[0].calorie = 1;

    candybar_list[1].brand = "bbb";
    candybar_list[1].weight = 222.2;
    candybar_list[1].calorie = 2;

    candybar_list[2].brand = "ccc";
    candybar_list[2].weight = 333.3;
    candybar_list[2].calorie = 3;

    cout << candybar_list[0].brand << "\t" << candybar_list[0].weight << "\t" << candybar_list[0].calorie << endl; 
    cout << candybar_list[1].brand << "\t" << candybar_list[1].weight << "\t" << candybar_list[1].calorie << endl; 
    cout << candybar_list[2].brand << "\t" << candybar_list[2].weight << "\t" << candybar_list[2].calorie << endl; 

    delete [] candybar_list;
    candybar_list = NULL;
    
    cout << endl;

    return 0;
}
