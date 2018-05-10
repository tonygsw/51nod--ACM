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
int num[105];
int n;
int total;
int dp[10005];
int DP(int nu)
{
    memset(dp,0,sizeof(dp));
    for(int i=0;i<n;i++)
        for(int j=nu;j>=num[i];j--)
            dp[j]=max(dp[j],dp[j-num[i]]+num[i]);
}
int main()
{
    while(~scanf("%d",&n))
    {
        total=0;
        for(int i=0;i<n;i++)
        {
            scanf("%d",&num[i]);
            total+=num[i];
        }
        int half=total/2;
        DP(half);
        //cout<<dp[half]<<endl;
        cout<<abs(total-dp[half]-dp[half])<<endl;

    }
}
