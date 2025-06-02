#include<iostream>
#include<unordered_map>
#include<map>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    map<int ,int>hashmap;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        hashmap[arr[i]]++;
    }

    int maxFreq=0;
    int maxEle;
    for(auto it:hashmap)
    {
        
        if(it.second >maxFreq )
        {
            maxFreq = it.second;
            maxEle = it.first;
        }
    }
    cout<<"Frequency of Element " << maxEle << " is "<<maxFreq<<endl;
    cout<<endl;
    return 0;
}