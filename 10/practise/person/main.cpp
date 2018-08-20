#include <iostream>
#include "person.h"

int main()
{
    Person fivehao;
    fivehao.Show();
    fivehao.FormalShow();
    Person wuhao("hao");
    wuhao.Show();
    wuhao.FormalShow();
    char ch[25] = "wu";
    Person mars("hao", ch);
    mars.Show();
    mars.FormalShow();
    return 0;
}