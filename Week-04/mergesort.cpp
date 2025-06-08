#include<iostream>
using namespace std;
void merge(int arr[],int low,int mid,int high)
{
  // arr[low...mid]
  // arr[mid+1 ... high]
  int left = low;
  int right = mid+1;
  int temp[high - low + 1];
  int i = 0;
  while(left <= mid && right <= high)
  {
    if(arr[left] <= arr[right])
    {
      temp[i++] = arr[left++];
    }
    else
    {
      temp[i++] = arr[right++];
    }
  }
  while(left <= mid)
  {
    temp[i++] = arr[left++];
  }
  while(right <= high)
  {
    temp[i++] = arr[right++];
  }


  for(int j = 0; j < i; j++)
  {
    arr[low + j] = temp[j];
  }
  

}
  
  void merge_sort(int arr[],int low,int high)
{
  if(low == high ) return;
  int mid = (low+high)/2;
  merge_sort(arr,low,mid);
  merge_sort(arr,mid+1,high);
  merge(arr,low,mid,high);
}
int main (){
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  merge_sort(arr,0,n-1);
  for (int i = 0; i < n; i++) {
   cout<<arr[i]<<" ";
  }
  cout<<endl;
  return 0;
}
