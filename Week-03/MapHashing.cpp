#include<iostream>
#include<map>
#include<stdlib.h>
#include <unordered_map>

using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    unordered_map<int ,int>hash;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        // pre compute
        hash[arr[i]] ++;
    }
    
    
    
    int q ;
    cin>>q;
    while (q--)
    {
        int num ;
        cin>>num;
        cout<<hash[num]<<endl;
    }
    for (auto it : hash) {
        cout << it.first << " --> " << it.second << endl;
    }

}