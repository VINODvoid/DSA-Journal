#include<iostream>
using namespace std;
void occurences(int arr[],int n,int k)
{
    int start = 0;
    int end = n-1;
    int f_occurence = -1;
    int l_occurence = -1;
    while (start<=end)
    {
        int mid = start + (end-start)/2;
        if(arr[mid] == k)
        {
            f_occurence = mid;
            end = mid-1;
        }
        else if(arr[mid]<k)
        {
            start = mid+1;
        }
        else{
            end = mid-1;
        }
    }
    start = 0;
    end = n-1;
    while(start<=end)
    {
        int mid = start+ (end-start)/2;
        if(arr[mid] == k)
        {
            l_occurence = mid;
            start=mid+1;
        }
        else if (arr[mid]<k)
        {
            start = mid+1;
        }
        else{
            end = mid-1;
        }
    }
    cout<<"First occurence of "<<k << " is on index "<<f_occurence<<endl;
    cout<<"Last occurence of " << k << " is on index "<<l_occurence<<endl;
    
}
int main()
{
    int arr[10]={2,4,6,10,10,10,12,24};
    occurences(arr,10,10);
}