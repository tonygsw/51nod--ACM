/*
    data:2018.7.14
    author:authorgsw
    link:http://www.51nod.com/onlineJudge/questionCode.html#!problemId=1082
*/
#define ll long long
#define IO ios::sync_with_stdio(false);

#include<math.h>
#include<stdio.h>
#include<string.h>
#include<iostream>
#include<algorithm>
using namespace std;
ll vis[1000005];int len=0;
bool judge(ll n)
{
    if(n%7==0)return true;
    while(n!=0)
    {
        if(n%10==7)return true;
        n=n/10;
    }
    return false;
}
void init()
{
    memset(vis,0,sizeof(vis));
    for(int i=1;i<1000005;i++)
        if(judge(i))vis[len++]=i;
}
int main()
{
    int t;ll n;
    init();
    scanf("%d",&t);
    while(t--)
    {
        ll ans=0;
        scanf("%lld",&n);
        ans=n*(n+1)*(2*n+1)/6;
        for(int i=0;i<len;i++)
        {
            if(vis[i]>n)break;
            ans=ans-vis[i]*vis[i];
        }
        printf("%lld\n",ans);
    }
}
