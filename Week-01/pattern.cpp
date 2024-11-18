// Rules for any kind of pattern:
//*  1. We always use nested loops for printing the patterns. For the outer loop, we count the number of lines/rows and loop for them.
//* Next, for the inner loop, we focus on the number of columns and somehow connect them to the rows by forming a logic such that for each row we get the required number of columns to be printed.
//* We print the ‘*’ inside the inner loop.
//* Observe symmetry in the pattern or check if a pattern is a combination of two or more similar patterns.

#include <iostream>
using namespace std;
void pattern1(int n)
{
    cout<<"\nPattern 1: "<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
    {
        cout<<"* ";
    }
    cout<<endl;
    }
}

void pattern2(int n)
{
    cout<<"\nPattern 2: "<<endl;
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
    cout<<"\nPattern 3: "<<endl;
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
    cout<<"\nPattern 4: "<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<i+1<<" ";
        }
        cout<<endl;
    }
}
void pattern5(int n)
{
    cout<<"\nPattern 5:"<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}
void pattern6(int n)
{
    cout<<"\nPattern 6:"<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i;j++)
        {
            cout<<j+1<<" ";
        }
        cout<<endl;
    }
}
void pattern7(int n)
{
    cout<<"\nPattern 7:"<<endl;
    for(int i=0;i<n;i++)
    {
        // space loop
        for(int j=0;j<n-i-1;j++)
        {
            cout<<" ";
        }
        // star loop
        for(int j=0;j<2*i+1;j++)
        {
            cout<<"*";
        }
        // space loop
        for(int j=0;j<n-i-1;j++)
        {
            cout<<" ";
        }
        cout<<endl;
    }
}
void pattern8(int n)
{
    cout<<"\nPattern 8:" <<endl;
    for(int i=0;i<n;i++)
    {
        // space loop
        for(int j=0;j<=i;j++)
        {
            cout<<" ";
        }
        // space loop
        for(int j=0;j<(2*n-(2*i+1));j++)
        {
            cout<<"*";
        }// space loop
        for(int j=0;j<=i;j++)
        {
            cout<<" ";
        }
        cout<<endl;
    }
}
void pattern9(int n)
{
    
}
int main(){
    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;
    pattern1(n);
    pattern2(n);
    pattern3(n);
    pattern4(n);
    pattern5(n);
    pattern6(n);
    pattern7(n);
    pattern8(n);
    return 0;
}