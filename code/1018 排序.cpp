#include<iostream>
#include<algorithm>
#include<math.h>
#include<stdio.h>
using namespace std;
#define ll long long
ll num[50005];
int main()
{
	ll n;
	scanf("%I64d",&n);
	for(ll i=0;i<n;i++)
		scanf("%I64d",&num[i]);
	sort(num,num+n);
	for(int i=0;i<n;i++)
		cout<<num[i]<<endl;	
}
