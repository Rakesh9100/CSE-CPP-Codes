#include <iostream>
using namespace std;
 
int main()
{
    string str;
    cout<<"Enter the string: ";
    getline(cin, str);
    
    cout<<str.capacity()<<endl;
    
    str.resize(5);
    cout<<"After resizing string: "<<str<<endl;
    cout<<"After resizing length: "<<str.length()<<endl;
    cout<<"After resizing capacity: "<<str.capacity()<<endl;
    
    str.shrink_to_fit();
    cout<<"After shrink capacity: "<<str.capacity()<<endl;
    
    return 0;
}