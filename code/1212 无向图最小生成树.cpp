/*
    data:2018.05.10
    author:gsw
    link:http://www.51nod.com/onlineJudge/questionCode.html#!problemId=1212
    account:2684524947@qq.com

*/
#define ll long long
#define IO ios::sync_with_stdio(false);

#include<iostream>
#include<algorithm>
#include<math.h>
#include<stdio.h>
#include<string.h>
using namespace std;

class Edge
{
public:
    int a,b,c;
};
Edge edge[50005];
int pre[1005];int n,m;

bool camp(Edge aa,Edge bb)
{
    return aa.c<bb.c;
}
int Find(int x)
{
    int r=x;
    while(r!=pre[r])
        r=pre[r];
    int i=x,j;
    while(pre[i]!=r)
    {
        j=pre[i];
        pre[i]=r;
        i=j;
    }
    return r;
}
void init()
{
    memset(edge,0,sizeof(edge));
    for(int i=1;i<=n;i++)
        pre[i]=i;
}
int mix(int x,int y)
{
    //cout<<x<<" y="<<y<<endl;
    int fx=Find(x),fy=Find(y);
    //cout<<fx<<" fy="<<fy<<endl;
    if(fx!=fy)
    {
        pre[fy]=fx;
        return 1;
    }
    return 0;
}
ll kusal()
{
    sort(edge,edge+m,camp);
    ll ans=0;int js=0;
    for(int i=0;i<m;i++)
    {

        if(mix(edge[i].a,edge[i].b))
        {
            //cout<<"ans="<<ans<<endl;
            ans+=edge[i].c;
            js++;
        }
        if(js==(n-1))break;
    }
    return ans;
}
int main()
{

    scanf("%d%d",&n,&m);
    init();
    int a,b,c;
    for(int i=0;i<m;i++)
    {
        scanf("%d%d%d",&a,&b,&c);
        edge[i].a=a;edge[i].b=b;edge[i].c=c;
    }
    cout<<kusal()<<endl;
    return 0;
}
