/*
	author:gsw
	data:2018.8.6
	link:http://www.51nod.com/onlineJudge/questionCode.html#!problemId=1091
*/
#define IO ios::sync_with_stdio(false);
#define ll long long

#include<math.h>
#include<vector>
#include<stdio.h>
#include<string.h>
#include<iostream>
#include<algorithm>
using namespace std;
class Node{
    public:
        int l,r;
};
Node node[50005];
int n;

bool camp(Node a,Node b)
{
    if(a.l==b.l)return a.r<b.r;
    return a.l<b.l;
}
int main()
{
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        scanf("%d%d",&node[i].l,&node[i].r);
    sort(node,node+n,camp);
    int ans=0;Node res=node[0];
    for(int i=1;i<n;i++)
    {
        if(node[i].r<=res.r)ans=max(ans,node[i].r-node[i].l);
        else
        {
            ans=max(ans,res.r-node[i].l);
            res=node[i];
        }
    }
    printf("%d\n",ans);
}
