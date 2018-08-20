// or.cpp
#include <iostream>
int main()
{
    using namespace std;
    cout << "This program may reformat your hard disk\n"
            "http://ht010.speiyou.cn/admin/admin/course/courseManage!searchTeacherByName.action?name=%E7%8E%8B&teacherType=doubleNormal&r_m=0.8876992930196106and destroy all your data.\n"
            "Do you wish to continue? <y/n>";
    char ch;
    cin >> ch;
    if (ch == 'y' || ch == 'Y')
        cout << "You were warned!\a\a\n";
    else if (ch == 'n' || ch == 'N')
        cout << "A wise choice ... bye\n";
    else
    cout << "That wasn't a y or n! Apparently you "
            "can't follow\ninstructions, so "
            "I'll trash your disk anyway.\a\a\a\n";
    return 0;
}