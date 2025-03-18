#include<iostream>
using namespace std;
int count =0;
void printf()
{
    if(count == 3) return;
    cout<<count<<endl;
    count++;
    printf();
}
int main()
{
    printf();
    return 0;
}