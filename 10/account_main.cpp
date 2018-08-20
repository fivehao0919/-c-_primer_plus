#include <iostream>
#include "account.h"

int main()
{
    Account fivehao("fivehao", "12345", 1000.10);
    fivehao.show_account();
    fivehao.save(1000);
    fivehao.take_out(500);
    return 0;
}