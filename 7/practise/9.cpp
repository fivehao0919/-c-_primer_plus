#include <iostream>
using namespace std;
const int SLEN = 30;
struct student {
    char fullname[SLEN];
    char hobby[SLEN];
    int ooplevel;
};

int getinfo(student pa[], int n);

void display1(student st);

void display2(const student * ps);

void display3(const student pa[], int n);

int main()
{
    cout << "Enter class size: ";
    int class_size;
    cin >> class_size;
    while (cin.get() != '\n')
        continue;
    student * ptr_stu = new student[class_size];
    int entered = getinfo(ptr_stu, class_size);
    for (int i = 0; i < entered; i++)
    {
        display1(ptr_stu[i]);
        display2(&ptr_stu[i]);
    }
    display3(ptr_stu, entered);
    delete [] ptr_stu;
    cout << "Done\n";
    return 0;
}

int getinfo(student pa[], int n)
{
    int i;
    char temp[SLEN];
    for (i = 0; i < n;i++)
    {
        cout << "type fullname: ";
        cin.getline(pa[i].fullname, SLEN);
        if (!*pa[i].fullname)
        {
            cout << "fullname cann't be empty.\n";
            cout << "QUIT.\n";
            break;
        }
        cout << "type hobby: ";
        cin.getline(pa[i].hobby, SLEN);
        cout << "type ooplevel: ";
        cin >> pa[i].ooplevel;
        cin.get();
    }
    return i;
}

void display1(student st)
{
    cout << "student fullname: " << st.fullname << endl;
    cout << "student hobby: " << st.hobby << endl;
    cout << "student ooplevel: " << st.ooplevel << endl;
}

void display2(const student * ps)
{
    cout << "student fullname: " << ps->fullname << endl;
    cout << "student hobby: " << ps->hobby << endl;
    cout << "student ooplevel: " << ps->ooplevel << endl;
}

void display3(const student pa[], int n)
{
    for (int i = 0; i < n;i++)
    {
        cout << "student" << i + 1 << " fullname: " << pa[i].fullname << endl;
        cout << "student" << i + 1 << " hobby: " << pa[i].hobby << endl;
        cout << "student" << i + 1 << " ooplevel: " << pa[i].ooplevel << endl;
    }
}