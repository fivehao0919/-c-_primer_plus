// treacle.cpp
#include <iostream>
int main()
{
    using namespace std;
    float treacle[10] = {1.1, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0, 10.0};
    float * ptreacle = &treacle[0];
    cout << ptreacle[0] << endl;
    cout << ptreacle[9] << endl;
    return 0;
}