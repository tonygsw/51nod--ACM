/*
    author:gsw
    data:2018.3.12
    link:http://www.51nod.com/onlineJudge/questionCode.html#!problemId=1118
*/
#include<iostream>
#include<algorithm>
#include<math.h>
#include<stdio.h>
#include<string.h>
using namespace std;
#define ll long long
ll num[1005][1005];
ll mod=1e9+7;
void init()
{
    memset(num,0,sizeof(num));
    for(int i=0;i<1005;i++)
    {
        num[1][i]=1;
        num[i][1]=1;
    }
    for(int i=2;i<1005;i++)
        for(int j=2;j<1005;j++)
            num[i][j]=(num[i-1][j]+num[i][j-1])%mod;
}
int main()
{
    init();
    int n,m;
    while(~scanf("%d%d",&n,&m))
    {
        cout<<num[n][m]<<endl;
    }
}
