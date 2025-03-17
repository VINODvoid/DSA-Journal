#include<iostream>
using namespace std;

int main()
{
    int sum = 0;
    int n = 77889;
    while(n>0)
    {
    int rem = n%10;
    cout<<rem;
    sum +=rem;
    n= n/10;
    }
    cout<<endl<<sum<<" "<<endl;

    return 0;
}
