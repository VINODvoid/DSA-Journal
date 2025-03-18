#include<iostream>
using namespace std;
int gcd(int a,int b)
{
	while(a>0 && b>0)
	{
		if(a>b) a %=b;
		else b %=a;
	}
	if(a == 0) return b;
	else return a;

}

int main()
{
    int n1=11, n2 = 40;
    // int gcd = 1;
    // for(int i=1;i<=min(n1,n2);i++)
    // {
    //     if(n1%i == 0 && n2 %i==0)
    //     {
    //         gcd = i;
    //     }
    // }
    // cout<<gcd<<endl;
    cout<<gcd(n1,n2)<<endl;
    return 0;
}