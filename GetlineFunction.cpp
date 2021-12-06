#include <iostream>
using namespace std;
 
int main()
{
    string str1, str2;
    cout<<"Enter the string1: ";
    getline(cin, str1);
    
    cout<<"Enter the string2: ";
    getline(cin, str2);
    
    if(str1.compare(str2) == 0)
    cout<<"Equal strings"<<endl;
    else
    cout<<"Not equal strings"<<endl;
    
    return 0;
}