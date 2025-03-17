#include<iostream>
using namespace std;
int main()
{
    int n= 36;
    for(int i= 1;i<=n/2;i++)
    {
        if(n%i ==0)
        {
            cout<<i<<" ";
        }
    }
    cout<<endl;
    return 0;
}