// stacker.cpp -- testing the Stack class
#include <iostream>
#include <cctype>   // or ctype.h
#include "stack.h"

int main()
{
    using namespace std;
    Stack st;   // create an empty stack
    char ch;
    double total = 0.0;
    Item po;
    cout << "Please enter A to add a purchase order,\n"
         << "P to process a PO, or Q to quit.\n";
    while (cin >> ch && toupper(ch) != 'Q')
    {
        while (cin.get() != '\n')
            continue;
        if (!isalpha(ch))
        {
            cout << '\a';
            continue;
        }
        switch(ch)
        {
            case 'A':
            case 'a':   cout << "Enter a name of customer: ";
                        cin >> po.fullname;
                        cout << "Enter a payment of customer: ";
                        cin >> po.payment;
                        if (st.isfull())
                            cout << "stack already full\n";
                        else
                            st.push(po);
                        break;
            case 'P':
            case 'p':   if (st.isempty())
                            cout << "stack already empty\n";
                        else {
                            st.pop(po);
                            total += po.payment;
                            cout << "PO #" << po.fullname << " popped\n";
                            cout << "total: " << total << endl;
                        }
                        break;
                      
        }
        cout << "Please enter A to add a purchase order,\n"
             << "P to process a PO, or Q to quit.\n";
    }
    cout << "Bye\n";
    return 0;
}