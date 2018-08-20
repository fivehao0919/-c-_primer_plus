// 6.cpp
#include <iostream>
#include <cstring>  // for strlen(), strcpy()

using namespace std;

template <typename T>
void maxn(T arr[], int n);
template <> 
void maxn<char *>(char * ch[], int n);


int main()
{
    int arr1[6] = {1, 2, 3, 4, 5, 6};
    double arr2[4] = {1.1, 2.2, 3.3, 4.4};
    char * arr3[5] = {"aaaaaaaaaaaa", "bbbb", "cccccc", "ddddddd", "eeeeeeeeeeee"};
    maxn(arr1, 6);
    maxn(arr2, 4);
    maxn(arr3, 5);
    return 0;
}

template <typename T>
void maxn(T arr[], int n)
{
    T max = 0;
    for(int i = 0; i < n; i++)
        max = arr[i] > max ? arr[i] : max;
    cout << max << endl;
}

template <>
void maxn<char *>(char * ch[], int n)
{
    int max = 0;
    int max_id = 0;
    for(int i = 0; i < n; i++)
    {
        max_id = (strlen(ch[i]) > max ? i : max_id);
        cout << max_id << " " << strlen(ch[i]) << " " << ch[i] << " " << &ch[i] << endl;
    }
    for(int i = 0; i < n; i++)
    {
        if (strlen(ch[i]) == strlen(ch[max_id]))
        {
            max_id = i;
            break;
        }
    }
    cout << ch[max_id] << " " << &ch[max_id] << endl;
}