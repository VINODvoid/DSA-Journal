#include<iostream>
using namespace std;
int second_largest(int arr[], int n)
{
    int largest = arr[0];
    int s_largest = -1;
    for(int i=1;i<n;i++)
    {
        if(arr[i]>largest)
        {
            s_largest = largest;
            largest = arr[i];
        }
        if(arr[i]<largest && arr[i]>s_largest)
        {
            s_largest = arr[i];
        }
    }
    return s_largest;
}
int second_smallest(int arr[],int n)
{
    int smallest = arr[0];
    int s_smallest = -1;
    for (int i = 1; i < n; i++){
        if(arr[i]<smallest)
        {
            s_smallest = smallest;
            smallest = arr[i];
        }
        if(arr[i]>s_smallest && arr[i]<smallest)
        {
            s_smallest = arr[i];
        }
    }
    

    return s_smallest;
}
int main()
{
    int n;
    cout<<"Enter the value of n";
    cin>>n;
    int arr[n];
    cout<<"Enter the values";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int s_largest =second_largest(arr,n);
    int s_smallest = second_smallest(arr,n);
    cout<<"Second Largest number is" << s_largest<<"\nSecond Smallest number is "<<s_smallest<<endl;

    return 0;
}