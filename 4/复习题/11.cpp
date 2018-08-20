// ted.cpp
#include <iostream>
int main()
{
    using namespace std;
    double ted = 1.1;
    double * pted = &ted;
    cout << *pted << endl;
    return 0;
}