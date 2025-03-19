#include<iostream>
using namespace std;
int count =0;
// always add base condition 
// needs to add break 
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