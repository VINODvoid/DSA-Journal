#include<iostream>
using namespace std;
void printNum(int n, int i);
int main(){
    int n;
    cout<<"Enter the Max Element" << endl;
    cin>>n;
    printNum(n,1);
    return 0;
}

void printNum(int n,int i)
{
    if(n<i) return;
    cout<<n<<endl;
    printNum(n-1,i);
}