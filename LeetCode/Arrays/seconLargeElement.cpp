#include<iostream>
using namespace std;
int s_largest(int arr[],int n)
{
 int largest = arr[0];
 int s_largest = -1;
 for(int i=1;i<n;i++)
 {
    if(arr[i]>largest) largest = arr[i];

    if(arr[i]<largest && arr[i]>s_largest) s_largest = arr[i];
 }
    return s_largest;
}
int s_smallest(int arr[],int n)
{
    int smallest = arr[0];
    int s_smallest = arr[1];

    for(int i=1;i<n;i++)
    {
        if(arr[i]<smallest) smallest = arr[i];
        if(arr[i]>smallest && arr[i]<s_smallest) s_smallest = arr[i];
    }
    return s_smallest;
}
int main(){
    int arr[6] = {2,5,313,56,35,90};
    cout<<"The Second Largest Element is :\n";
    cout<<s_largest(arr,6)<<endl;
    cout<<"The Second Smallest Element is :\n";
    cout<<s_smallest(arr,6)<<endl;
    return 0;
}