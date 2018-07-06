/*
    author:gsw
    data:2018.6.27
    link:http://www.51nod.com/onlineJudge/questionCode.html#!problemId=2006
*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int line[1005][1005],girl[1005];bool used[1005];
int n,m,x,y;
void init()
{
    memset(line,0,sizeof(line));
    memset(girl,0,sizeof(girl));
}

bool Find(int x)
{
    int i,j;
    for(int j=n+1;j<=n+m;j++)
    {
        if(line[x][j]==true&&used[j]==false)
        {
            used[j]=1;
            if(girl[j]==0||Find(girl[j]))
            {
                girl[j]=x;
                return true;
            }
        }
    }
    return false;
}
int main()
{
    init();
    scanf("%d%d",&n,&m);
    while(scanf("%d%d",&x,&y)&&x!=-1)
        line[x][y]=1;
    int ans=0;
    for(int i=1;i<=n;i++)
    {
        memset(used,0,sizeof(used));
        if(Find(i))ans++;
    }
    cout<<ans<<endl;


}
