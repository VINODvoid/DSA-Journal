#include<iostream>
using namespace std;
void insertion_sort(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        int j=i;
        while (j>0 && arr[j-1]>arr[j])
        {
            swap(arr[j-1],arr[j]);
            j--;
        }
        
    }
} // time complexity : Worst Case/Average Case : O(N^2);
// Best case : O(n)

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    insertion_sort(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}