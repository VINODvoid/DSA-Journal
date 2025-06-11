#include<bits/stdc++.h>
using namespace std;

// call by reference 
// int f(int &x ,int &y)
// {
//     x= 15;
//     y=25;
//     return x,y;
// }

// passing pointer 
int f(int *x,int *y)
{
    return *x= 15,*y=25;
    
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int a = 10,b=20;
    f(&a,&b);
    cout<<a<<" "<<b<<endl;
    return 0;
}