/*
	author:gsw
	data:2018.8.6
	link:http://www.51nod.com/onlineJudge/questionCode.html#!problemId=1091

	数学降维打击，只关注x=1或者y=1，或x=y=2；
*/
#define IO ios::sync_with_stdio(false);
#define ll long long

#include<map>
#include<math.h>
#include<vector>
#include<stdio.h>
#include<string.h>
#include<iostream>
#include<iterator>
#include<algorithm>
using namespace std;
int ds1[100005];
int ds2[100005];
int ds[100005];
int num[100005];
void init()
{
    memset(ds1,0,sizeof(ds1));
    memset(ds2,0,sizeof(ds2));
    memset(ds,0,sizeof(ds));
    memset(num,0,sizeof(num));
}
int main()
{
    int n,tem;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        scanf("%d",&num[i]);
    for(int i=n-1;i>=0;i--)
    {
        ds1[i]=ds1[i+1],ds2[i]=ds2[i+1],ds[i]=ds[i+1];
        if(num[i]==1)ds1[i]=ds1[i+1]+1;
        else if(num[i]==2)ds2[i]=ds2[i+1]+1;
        else ds[i]=ds[i]+1;
    }
    ll ans=0;
    for(int i=0;i<n-1;i++)
    {
        if(num[i]==1)
            ans=ans+ds1[i+1]*2+ds2[i+1]+ds[i+1];
        else if(num[i]==2)
            ans=ans+ds1[i+1]+ds2[i+1];
        else ans+=ds1[i+1];
    }
    cout<<ans<<endl;
}
