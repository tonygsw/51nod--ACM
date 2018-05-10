#include<iostream>
#include<algorithm>
#include<math.h>
#include<stdio.h>
#include<string.h>
#include<vector>
using namespace std;
int tree[40005];
int num[10005];
void build(int l,int r,int p)
{
	if(l==r)tree[p]=num[l];
	else
	{
		int mid=(l+r)/2;
		build(l,mid,2*p);
		build(mid+1,r,2*p+1);
		tree[p]=max(tree[2*p],tree[2*p+1]);
	}
}
int query(int node,int begin,int end,int left,int right)
{
	if(left>end)return -1;
	if(begin>right||end<left)return 0;
	if(begin>=left&&end<=right)
		return tree[node];
	return max(query(2*node,begin,(begin+end)/2,left,right),query(2*node+1,(begin+end)/2+1,end,left,right));
}
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>num[i];
	build(0,n,1);
	
	//for(int i=0;i<30;i++)
	//	cout<<i<<" ="<<tree[i]<<" "<<endl;
	
	int q,l,r;
	cin>>q;
	for(int i=0;i<q;i++)
	{
		cin>>l>>r;
		cout<<query(1,0,n,l,r)<<endl;
	}	
} 
