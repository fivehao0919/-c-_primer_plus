// lotto.cpp
#include <iostream>
long double probability(unsigned numbers, unsigned picks);

int main()
{
    using namespace std;
    double total, choices, field_odds, special_odds;
    while (true)
    {
        cout << "Enter the total field number of choices on the game card and\n"
            "the field number of picks allowed:\n";
        if(!((cin >> total >> choices) && choices <= total))
        {
            break;
        }
        field_odds=probability(total, choices);

        cout << "Enter the total special number of choices on the game card and\n"
            "the special number of picks allowed:\n";
        if(!((cin >> total >> choices) && choices <= total))
        {
            break;
        }
        special_odds=probability(total, choices);
        
        cout << "The odds of winning is " << field_odds * special_odds << ".\n";
    }
    cout << "Enter Error!!!\n";
    cout << "bye\n";
    return 0;
}

long double probability(unsigned numbers, unsigned picks)
{
    long double result = 1.0;
    long double n;
    unsigned p;

    for (n = numbers, p = picks; p > 0; n--, p--)
        result = result * p/n;
    return result;
}