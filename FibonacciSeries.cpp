#include <iostream>
using namespace std;

int fib(int n);
int main()
{
    int num;
    cout<<"Enter the value: ";
    cin>>num;
    for(int i = 1; i <= num; i++)
    cout<<fib(i)<<" ";
    return 0;
}

int fib(int n)
{
    if(n <= 1)
    return n;
    return fib(n - 1) + fib(n - 2);
}
