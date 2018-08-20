// trends.cpp
#include <iostream>
#include <vector>
int main()
{
    using namespace std;
    int num;
    cout << "Please type your num: ";
    cin >> num;
    cout << num << endl;
    int * parray = new int[num+1];
    //vector<int> vt(num);
    cout << sizeof(*parray) << endl;
    //cout << sizeof(vt) << endl;
    cout << "Home of the jolly bytes";
    return 0;
}