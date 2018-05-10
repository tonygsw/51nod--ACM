#include<iostream>
#include<algorithm>
#include<math.h>
#include<stdio.h>
#include<string.h>
using namespace std;
#define ll long long
int num[60000];
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>num[i];
	ll ans=0;
	ll tem=0;
	for(int i=0;i<n;i++)
	{
		if(tem+num[i]>=0)
			tem=tem+num[i];
		else tem=0;
		ans=max(ans,tem);
	}
	cout<<ans<<endl;
}
