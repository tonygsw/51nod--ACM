#include<iostream>
#include<math.h>
#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;
#define ll long long
ll num[50005];
ll tree[200005];
void build(int l,int r,int k)
{
	if(l==r)
	{
		tree[k]=num[l];
		return;
	}
	else
	{
		build(l,(l+r)/2,2*k);
		build((l+r)/2+1,r,2*k+1);
		tree[k]=tree[2*k]+tree[2*k+1];
	}
}
ll query(int k,int begin,int end,int l,int r)
{
	if(l>end)return 0;
	if(r<begin)return 0;
	if(begin>=l&&end<=r)return tree[k];
	return query(2*k,begin,(begin+end)/2,l,r)+query(2*k+1,(begin+end)/2+1,end,l,r);
}
int main()
{
	memset(num,0,sizeof(num));
	int n,q;
	cin>>n;
	for(int i=1;i<=n;i++)
		cin>>num[i];
	build(1,n,1);
	
	/* 
	for(int i=0;i<4*n;i++)
		cout<<tree[i]<<" ";
	*/ 
	cin>>q;
	int a,b;
	for(int i=0;i<q;i++)
	{
		cin>>a>>b;
		cout<<query(1,1,n,a,a+b-1)<<endl;
	}
}
