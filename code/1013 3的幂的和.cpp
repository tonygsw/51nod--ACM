/*
	author:gsw
	data:2017.3.12
	link:http://www.51nod.com/onlineJudge/questionCode.html#!problemId=1013
*/
#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<math.h>
#include<string.h>
#include<map>
using namespace std;
#define ll long long
ll mod=1000000007;
ll fastmod(ll x,ll y)
{
	ll ans=1;
	while(y>0)
	{
		if(y&1)ans=ans*x%mod;
		x=x*x%mod;
		y=y/2;
	}
	return ans;
}
int main()
{
	int n;
	while(~scanf("%d",&n))
	{
		ll ans=fastmod(3,n+1);
		cout<<(ans-1)%mod*fastmod(2,mod-2)%mod<<endl;
	}
}
