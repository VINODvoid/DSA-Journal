#include<iostream>
using namespace std;
int count_elements(int arr[],int n,int k)
{
    int start = 0, end = n-1;
    int f_occurence = -1;
    while(start<=end)
    {
        int mid = start + (end-start)/2;
        if(arr[mid]==k)
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
    start = 0, end = n-1;
    int l_occurence = -1;
    while(start<=end)
    {
        int mid = start + (end-start)/2;
        if(arr[mid]==k)
        {
            l_occurence = mid;
            start = mid+1;
        }
        else if(arr[mid]<k)
        {
            start = mid+1;
        }
        else{
            end = mid-1;
        }
    }
    return l_occurence - f_occurence +1;

}
int main()
{
    int arr[] = {2,5,6,7,7,7,10};
    int count = count_elements(arr,7,7);
    cout<<"Count of "<<7<< " is "<<count<<endl;

    return 0;
}