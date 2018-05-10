/*
    data:2018.03.13
    author:gsw
    link:http://www.51nod.com/onlineJudge/questionCode.html#!problemId=1130
*/
#include<iostream>
#include<algorithm>
#include<string.h>
#include<stdio.h>
#include<math.h>
using namespace std;
#define ll long long
inline ll fastmod(ll x,ll y,ll mod)
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
int prime[100];int len=0;
int main()
{
	ll p;
	scanf("%lld",&p);
	ll t=p-1;
	for(int i=2;i*i<t;i++)
	{
		if(t%i==0)
		{
			prime[len++]=i;
			while(t%i==0)t=t/i;
		}
	}
	if(t!=1)prime[len++]=t;
	for(int i=2;i<=p;i++)
	{
		bool flag=true;
		for(int j=0;j<len;j++)
		{
			t=fastmod(i,(p-1)/prime[j],p);
			if(t==1)
			{
				flag=false;
				break;
			}
		}
		if(flag)
		{
			cout<<i<<endl;
			break;
		}
	} 
}
