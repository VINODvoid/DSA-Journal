#include<iostream>
using namespace std;
void swapElements(int arr[],int i,int j);
void displayArray(int arr[],int n);
int main()
{
    int n;
    cout<<"Enter the size of Array: "<<endl;
    cin>>n;

    int arr[n];
    cout<<"Enter the elements "<<endl;
    for(int i=0;i< n;i++)
    {
        cin>>arr[i];
    }
    cout<<"The swapped elements are "<<endl;
    swapElements(arr,0,n-1);
    displayArray(arr,n);
    return 0;
}

void swapElements(int arr[], int i, int j)
{
    int temp = 0;
    if(i>=j) return;
    temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
    swapElements(arr,i+1,j-1);

    return;
}

void displayArray(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
}
