#include<iostream>
using namespace std;
void backtrackPrint(int n,int i)
{
    if(i<1) return ;
    backtrackPrint(n,i-1);
    cout<<i<<endl;
}
int main()
{
    int n;
    cout<<"Enter the Max element"<<endl;
    cin>>n ;
    backtrackPrint(n,n);
    return 0;
}