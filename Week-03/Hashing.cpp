#include <iostream>
using namespace std;
void countNum(int n, int arr[]);
int main()
{
    int n;
    cout << "Enter the size" << endl;
    cin >> n;
    int arr[n];
    cout << "Enter the elements" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int hash[13] = {0};
    for (int i = 0; i < n; i++)
    {
        hash[arr[i]] += 1;
    }

    cout << "Enter the q numbers" << endl;
    int qnum;
    cin >> qnum;
    cout << "Enter the q elements" << endl;
    while (qnum--)
    {
        int num;
        cin >> num;
        cout << "Value is " << hash[num] << endl;
    }

    return 0;
}
// First Approach
// void countNum(int n,int arr[])
// {
//     int count =0;
//     for (int i = 0; i <11; i++)
//     {
//         if(arr[i]==n)
//         {
//             count++;
//         }
//     }
//     cout<<count;

// }
