#include<iostream>
using namespace std;
int main()
{
    int n = 1973,count = 0;
    for (int i = 1; i*i <=n; i++)
    {
        if(n%i==0)
        {
            count++;
        }
        if(n/i != i)
        {
            count++;
        }
    }
    if(count == 2)
    {
        cout<<"prime number"<<endl;
    }    
    else{
        cout<<"not prime number"<<endl;

    }
    return 0;
}