#include<iostream>
#include<algorithm>
#include<math.h>
#include<string.h>
using namespace std;
#define pi 3.1415926
#define e 2.718281828459
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		if(n%(k+1)==0)cout<<"B"<<endl;
		else cout<<"A"<<endl;
	}
}
