// 4.cpp
#include <iostream>
int main()
{
    using std::cout;
    using std::endl;
    double si = 0;
    double ci = 0;
    int i = 0;
    do
    {
        si = si + ( 100 * 0.1);
        ci = ci + ( (100 + ci) * 0.05);
        i++;
    } while (si > ci);
    cout << si << endl;
    cout << ci << endl;
    cout << i << endl;
    return 0;
}