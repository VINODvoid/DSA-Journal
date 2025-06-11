#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int *arr;
    int n;
    cin>>n;
    arr = new int[n];
    for(int i = 0; i < n; ++i) cin >> arr[i]; // arr[i] = *(arr[i]+sizeof(int))
    for(int i=0;i<n;i++) cout<<&arr[i]<<endl;
    delete[] arr;
    // int x = 10;
    // int *ptr = &x;     // ptr stores address of x
    // cout<<ptr;
    // cout<<endl;
    // ptr++;
    // cout<<ptr;
    // int **ptr1 = &ptr; // ptr1 stores address of ptr
    // cout << *ptr1<<endl;    // Prints address of x
    // cout << **ptr1;    // Prints value of x
    return 0;
}