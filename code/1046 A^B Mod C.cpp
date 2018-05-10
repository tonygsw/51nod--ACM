#include<iostream>
#include<algorithm>
#include<math.h>
#include<stdio.h>
#include<string.h>
#define ll long long
ll mod=0; 
using namespace std;
ll fast_pow(ll a,ll b)
{
	ll ans=1;
	while(b!=0)
	{
		if(b&1)ans=ans*a%mod;
		a=a*a%mod;
		b>>=1;
	}
	return ans;
}
int main()
{
	ll a,b;
	cin>>a>>b>>mod;
	cout<<fast_pow(a,b)<<endl; 
}
