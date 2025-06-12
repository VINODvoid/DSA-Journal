// https://leetcode.com/problems/number-of-good-pairs/description/
#include <bits/stdc++.h>
using namespace std;
int goodpairs(int arr[], int n)
{
    int pairs = 0;
    // brute force approach
    // for (int i = 0; i < n; i++)
    // {
    //     for(int j=i+1;j<n;j++)
    //     {
    //         if(arr[i]==arr[j])
    //         {
    //             pairs++;
    //         }
    //     }
    // }

    map<int, int> freq;
    for (int i = 0; i < n; i++)
    {
        pairs +=freq[arr[i]];
        freq[arr[i]]++;
    }

    return pairs;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int pairs = goodpairs(arr, n);
    cout << pairs << endl;
    return 0;
}