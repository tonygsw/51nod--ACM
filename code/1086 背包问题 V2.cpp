#include<iostream>
#include<string.h>
using namespace std;
int we[1005];int p[1005];
int dp[50005];
int max(int a,int b)
{
	if(a>b) return a;
	else return b;
}
int main()
{
	memset(we,0,sizeof(we));
	memset(p,0,sizeof(p));
	memset(dp,0,sizeof(dp));
	int n,w;
	cin>>n>>w;
	int wi,pi,ci;
	int count=1;
	for(int i=0;i<n;i++)
	{
		cin>>wi>>pi>>ci;
		for(int j=1;j<=ci;j=j*2)
		{
			we[count]=j*wi;
			p[count]=j*pi;
			count++;
			ci=ci-j;
		}
		if(ci>0)
		{
			we[count]=ci*wi;
			p[count++]=ci*pi;
		}
	}
	for(int i=1;i<count;i++)
	{
		for(int j=w;j>=0;j--)
		{
			if(j>=we[i])
			dp[j]=max(dp[j],dp[j-we[i]]+p[i]);
		//	cout<<dp[j]<<"  "; 
		}
	//	cout<<endl;
	}
	cout<<dp[w];
}
