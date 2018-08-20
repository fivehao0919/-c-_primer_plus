// 3.7.1.cpp
#include <iostream>
int main()
{
    using namespace std;
    cout << "Please type your height: _______in\b\b\b\b\b\b";
    int height;
    cin >> height;
    const float factor = 0.0833333;
    cout << "Your height is " << height * factor << " ft" << endl;
    return 0;
}