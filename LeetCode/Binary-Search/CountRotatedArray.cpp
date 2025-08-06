#include <iostream>
#include <vector>
using namespace std;

int findMin(vector<int>& nums) {
        int n = nums.size();        //Taking array size
        int low = 0 , high = n-1;   //Initializing our low and high variable 
       
        if(low == high) return nums[low];         //If array contains only one element             
        if(nums[low] <= nums[high])return nums[0];    //If array is already sorted and at correct positions like : 1 2 3 4 5 (No Rotation)
        
        while(low <= high){

            int mid = low + (high-low)/2;
            int prev = (mid- 1 + n)%n , next = (mid +1)%n;
            
            if (nums[mid] <= nums[prev] && nums[mid] <= nums[next]) return nums[mid];   //Returning our value
            else if (nums[0] <= nums[mid]) low = mid +1;             //Checking for sorted array with element arr[0] not with arr[low]
            else if (nums[mid] <= nums[n-1]) high = mid-1;
       
        }
        return -1;
    }


int main()
{
    int arr[] = {4, 5, 6, 7, 0, 1, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    vector<int> nums(arr, arr + n);
    findMin(nums);   
    return 0;
}
