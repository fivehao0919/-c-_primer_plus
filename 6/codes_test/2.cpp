// 2.cpp
#include <iostream>
#include <cctype>
int main()
{
    using namespace std;
    const int SIZE = 10;
    double donations[SIZE];
    double donation;
    int count_1 = 0;
    int count_2 = 0;
    int sum = 0;
    /*while (isdigit(donation) && count_1 < 10)
    {   
        donations[0] = donation;
        sum += donation;
        count_1++;
        cin >> donation;
    }*/
    for (int i = 0 ; i < 10; i++)
    {
        if(cin >> donations[i])
        {
            sum += donations[i];
            count_1++;
        }
        else break;

    }

    double avg = sum / count_1;
    cout << "avg:" << avg << endl;
    for (int i = 0; i < count_1 ; i++)
    {
        if (donations[i]>avg)
            count_2++;
    }
    cout << "bigger than avg is :" << count_2 << endl;
    return 0;
}