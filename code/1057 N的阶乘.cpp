#include<iostream>
#include<math.h>
#include<string.h>
#include<algorithm>
using namespace std;
#define ll long long
ll a[1000005]; 
int main()
{
	int n;
	cin>>n;
	int cost=0;
	a[cost]=1;
	for(int i=2;i<=n;i++)
	{
		ll c=0; 
		for(int j=0;j<=cost;j++)
		{
			a[j]=a[j]*i+c;
			c=a[j]/10000;
			a[j]%=10000;
		}
		if(c)a[++cost]=c;
	}
	printf("%lld",a[cost]);
	for(int i=cost-1;i>=0;i--)
		printf("%04lld",a[i]);
	return 0; 
}
