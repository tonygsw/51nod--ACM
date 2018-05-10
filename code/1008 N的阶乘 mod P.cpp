#include<iostream>
#include<math.h>
#include<string>
#include<stdio.h>
using namespace std;
#define ll long long
int main()
{
	ll n,p;
	cin>>n>>p;
	ll ans=1;
	for(int i=1;i<=n;i++)
		ans=ans*i%p;
	cout<<ans<<endl; 
}
