#include <iostream>
using namespace std;
int main()
{
    int arr[6] = {2,3,12,54,23,1276};
    int largest = 0;
    for (int i = 0; i <6 ; i++)
    {
        if(largest<arr[i]) largest = arr[i];
    }
    cout<<largest;
    
    return 0;
}