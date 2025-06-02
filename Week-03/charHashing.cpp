#include<iostream>
#include<array>
using namespace std;
int main()
{
    string s;
    cin>>s;

    int hash[26] = {0};
    for(int i=0;i<s.size();i++)
    {
        hash[s[i]-'a']++;
    }
    // pre storing
    cout<<"Enter the number of queries";
    int qnum;
    cin>>qnum;
    while(qnum--)
    {
        char c;
        cin>>c;
        cout<<hash[c-'a']<<endl;
        // fetching
    }


    return 0;
}