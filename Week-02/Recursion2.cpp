#include<iostream>
using namespace std;
void printName(int n,int i);
int main()
{
    int n;
    cin>>n;
    printName(n,0);
}

void printName(int n,int i)
{
    if(i>n) return;
    cout<<"Kal"<<endl;
    printName(n,i+1);
}