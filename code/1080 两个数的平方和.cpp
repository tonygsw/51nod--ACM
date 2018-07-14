/*
    author:gsw
    data:2018.7.14
    link:http://www.51nod.com/onlineJudge/questionCode.html#!problemId=1080
*/
#define ll long long
#define IO ios::sync_with_stdio(false);

#include<math.h>
#include<stdio.h>
#include<string.h>
#include<iostream>
#include<algorithm>
using namespace std;
ll n;bool vis[100005];
void init()
{
    memset(vis,0,sizeof(vis));
}

int main()
{
    scanf("%lld",&n);
    int cont=0;
    for(ll i=0;i<=sqrt(n);i++)
    {
        ll jj=n-i*i;ll j=sqrt(jj);
        if(j*j==jj)
        {
            if(vis[j]==0)printf("%lld %lld\n",i,j);
            vis[i]=1;vis[j]=1;cont=1;
        }
    }
    if(cont==0)printf("No Solution\n");
    return 0;
}
