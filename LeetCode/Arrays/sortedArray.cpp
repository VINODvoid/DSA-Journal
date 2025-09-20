#include<iostream>
using namespace std;
bool sorted_array(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]>arr[i+1]) return false;
    }
    return true;
}
int main()
{
    int arr[6] = {1,2,3,5,6,4};
    if(sorted_array(arr,6))
    {
        cout<<"Given array is sorted\n"<<endl;
    }
    else{
        cout<<"Given array is not sorted\n";
    }
    return 0;
}