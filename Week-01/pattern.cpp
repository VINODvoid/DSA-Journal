// Rules for any kind of pattern:
//*  1. We always use nested loops for printing the patterns. For the outer loop, we count the number of lines/rows and loop for them.
//* Next, for the inner loop, we focus on the number of columns and somehow connect them to the rows by forming a logic such that for each row we get the required number of columns to be printed.
//* We print the ‘*’ inside the inner loop.
//* Observe symmetry in the pattern or check if a pattern is a combination of two or more similar patterns.

#include <iostream>
using namespace std;
void pattern1(int n)
{
    cout<<"Pattern 1: "<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
    {
        cout<<"* ";
    }
    cout<<endl;
    }
    // ? Output 
// Enter the number of rows: 4
// ****
// ****
// ****
// ****
}

void pattern2(int n)
{
    cout<<"Pattern 2: "<<endl;
    for(int i = 0; i < n; i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<"* ";
        }
        cout<<endl; 
    }
}
void pattern3(int n)
{
    cout<<"Pattern 3: "<<endl;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
void pattern4(int n)
{
    cout<<"Pattern 4: "<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<i+1<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;
    pattern1(n);
    pattern2(n);
    pattern3(n);
    pattern4(n);

    return 0;
}