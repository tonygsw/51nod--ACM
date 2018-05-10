/*
	author:gsw
	data:2018.4.19
	link:http://www.51nod.com/onlineJudge/questionCode.html#!problemId=1183
	accout:2684524947@qq.com
*/

#define ll long long
#define IO ios::sync_with_stdio(false);
#include<bits/stdc++.h>
using namespace std;

int dp[1005][1005];
string a,b;

void init()
{
	memset(dp,0,sizeof(dp));
}

inline int min3(int a,int b,int c)
{
	a=min(a,b);
	a=min(a,c);
	return a;
}
int DP()
{
	for(int i=0;i<max(a.length(),b.length());i++)
	{
		dp[0][i]=i;dp[i][0]=i;
	}
	for(int i=1;i<=a.length();i++)
	{
		for(int j=1;j<=b.length();j++)
		{
			if(a[i-1]==b[j-1])dp[i][j]=min3(dp[i-1][j]+1,dp[i][j-1]+1,dp[i-1][j-1]);
			else dp[i][j]=min3(dp[i-1][j],dp[i][j-1],dp[i-1][j-1])+1;
		}
	}
	return dp[a.length()][b.length()];
}
int main()
{
	IO;
	cin.tie(0);
	
	init();
	
	cin>>a>>b;
	
	cout<<DP()<<endl;
	
	return 0;	
}
/*
DEBBCC
ECBCEC
*/
