#include <iostream>  
#include <string>  
using namespace std;  
int main()  
{  
    cout << "Enter words (q to quit) :" << endl;  
    string ch;  
    int num1 = 0 , num2 = 0 , num3 = 0;  
    while(cin >> ch){  
        if(ch[0] == 'q' && ch[1] == 0)  
            break;  
        if(ch[0] == 'a' || ch[0] == 'A' || ch[0] == 'e' || ch[0] == 'E' || ch[0] == 'i' || ch[0] =='I' || ch[0] == 'o' || ch[0] == 'O' || ch[0] == 'u' || ch[0] == 'U')  
            ++ num1;  
        else if((ch[0] >= 'a' && ch[0] <='z') || (ch[0] >= 'A' && ch[0] <='Z'))  
            ++ num2;  
        else ++ num3;  
    }  
    cout << num1 << " words beginning with vowels" << endl << num2 << " words beginning with consonants" << endl << num3 << " others" << endl;  
    return 0;  
}  