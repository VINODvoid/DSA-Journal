#include<iostream>
using namespace std;
bool sorted_array(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]<arr[i+1])
        {
            return true;
        }
    }
    return false;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    bool isSorted = sorted_array(arr,n);
    cout<<"Given array is sorted: " << isSorted;
    return 0;
}