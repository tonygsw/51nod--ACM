/*
    link:http://www.51nod.com/onlineJudge/questionCode.html#!problemId=1181
    author:gsw
    ID:2684524947@qq.com
    data:2018.04.07
*/
#include<iostream>
#include<algorithm>
#include<string.h>
#include<stdio.h>
#include<math.h>
#include<vector>
#define ll long long
#define IO ios_base::sync_with_stdio(0);
using namespace std;
bool vis[1000005];
int prim[100005];int len=0;
void init()
{
    memset(vis,0,sizeof(vis));
    memset(prim,0,sizeof(prim));
}
void prime()
{
    for(int i=2;i<1000005;i++)
    {
        if(!vis[i])prim[len++]=i;
        for(int j=0;j<len;j++)
        {
            if((ll)i*prim[j]>1000005)break;
            vis[i*prim[j]]=1;
            if(i%prim[j]==0)break;
        }
    }
}
int main()
{
    init();
    prime();
    int n;
    cin>>n;
    for(int i=0;i<len;i++)
    {
        //cout<<prim[i]<<endl;
        if(prim[i]>=n&&!vis[i+1])
        {
            cout<<prim[i]<<endl;
            break;
        }
    }
}
