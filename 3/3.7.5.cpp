// 3.7.5.cpp
#include <iostream>
int main()
{
    using namespace std;
    long long total_pop, us_pop;
    cout << "Enter the world's population: ";
    cin >> total_pop;
    cout << "Enter the population of the US: ";
    cin >> us_pop; 
    cout << "The population of the US is " << double(us_pop)/double(total_pop) * 100<< "\% of the world population.";
    return 0;
}