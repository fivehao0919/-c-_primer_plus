// 2.cpp
#include <iostream>
#include <cstring>
struct CandyBar
{
    char brand[50];
    double weight;
    int heat;
};

using namespace std;

void set_CandyBar(CandyBar & st, const char * brand = "Millennium Munch", const double weight = 2.85, const int heat = 350);
void display_CandyBar(const CandyBar & st);


int main()
{
    CandyBar muji;
    set_CandyBar(muji);
    display_CandyBar(muji);
    set_CandyBar(muji,"abc test", 10.11, 500);
    display_CandyBar(muji);
    return 0;
}

void set_CandyBar(CandyBar & st, const char * brand, const double weight, const int heat)
{
    strcpy(st.brand, brand);
    st.weight = weight;
    st.heat = heat;
}

void display_CandyBar(const CandyBar & st)
{
    cout << st.brand << endl;
    cout << st.weight << endl;
    cout << st.heat << endl;
    cout << endl;
}