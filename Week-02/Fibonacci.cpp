#include <iostream>
using namespace std;
int fibo(int n);
int main()
{
    int n;
    cout << "Enter the value of n\n";
    cin >> n;
    cout<<fibo(n)<<endl;
    return 0;
}

int fibo(int n)
{
    if(n<= 1) return n;
    return fibo(n-1) + fibo(n-2);
}