#include <iostream>
#include <vector>
#include<stack>
#include <algorithm>
using namespace std;

void nextLargestNum(int arr[], int n)
{

// ######### Brute Force Appraoch ###################
    // for (int i = 0; i < n; i++)
    // {
    //     bool found = false;
    //     for (int j = i + 1; j < n; j++)
    //     {
    //         if (arr[i] < arr[j])
    //         {
    //             cout << arr[i] << " --> " << arr[j] << endl;
    //             found = true;
    //             break;
    //         }
    //     }
    //     if (!found)
    //     {
    //         cout << arr[i] << " --> -1" << endl;
    //     }
    // }


    vector<int> v;
    stack<int> s;

    for(int i= n-1;i>=0 ;i--)
    {
        if(!s.empty() && s.top()<=arr[i])
        {
            s.pop();
        }
        if(s.empty())
        {
            v.push_back(-1);
        }
        else{
            v.push_back(s.top());
        }
        s.push(arr[i]);
    }

    reverse(v.begin(),v.end());
    for(auto i : v)
    {
        cout<<i<<endl;
    }
    
    
}

int main()
{
    int arr[] = {1, 3, 0, 0, 0, 4, 8, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    nextLargestNum(arr, n);
    return 0;
}
