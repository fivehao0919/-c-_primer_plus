// 3.cpp
#include <iostream>
#include <cstring>
const int BUF = 512;
const int N = 2;
char buffer[BUF];

struct chaff
{
    char dross[20];
    int slag;
};

int main()
{
    chaff *pd1, *pd2;
    pd1 = new chaff[N];
    pd2 = new (buffer) chaff[N];
    for (int i; i < N; i++)
    {
        char dross_temp[20];
        int slag_temp;
        std::cout << "type dross: ";
        std::cin.getline(dross_temp, 20);
        strcpy(pd1[i].dross, dross_temp);
        strcpy(pd2[i].dross, dross_temp);
        std::cout << "type slag: ";
        std::cin >> slag_temp;
        pd1[i].slag = pd2[i].slag = slag_temp;
        std::cout << pd1[i].dross << ", " << &pd1[i].dross << ", " << pd1[i].slag << ", " << &pd1[i].slag << std::endl;
        std::cout << pd2[i].dross << ", " << &pd2[i].dross << ", " << pd2[i].slag << ", " << &pd2[i].slag << std::endl;
        std::cin.get();
    }
    return 0;
}

