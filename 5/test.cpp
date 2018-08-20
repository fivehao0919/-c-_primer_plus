#include <iostream>
int main()
{
    double arr[5] = {21.1, 32.8, 23.4, 45.2, 37.4};
    double *pt = arr;
    for (int i = 0; i < 6; i++)
        std::cout << *pt << std::endl;
        std::cout << *(pt++)  << std::endl;
    return 0;
}