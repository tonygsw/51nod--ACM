#include<iostream>
#include<math.h>
#include<algorithm>
#include<stdio.h>
#include<cstdio>
#include<string.h>
using namespace std;
#define ll long long
int maxn=50005;
int sum[50005];
int xxx[50005];
class node{
	public:
		int num,id;
};
node a[50005];
bool camp(node a,node b)
{
	return a.num<b.num;
}
ll lowbit(ll x)
{
	return x&(-x);
}
void change(ll x,ll num)
{
	for(int i=x;i>0;i-=lowbit(i))
		sum[i]+=num;
}
ll  query(ll x)
{
	int ans=0;
	for(ll i=x;i<maxn;i+=lowbit(i))
		ans+=sum[i];
	return ans;
}
int main()
{
//	freopen("1.txt","r",stdin);
//	freopen("ans.txt","w",stdout);
	ll n,x,ans=0;
	cin>>n;//while(cin>>n){
	memset(sum,0,sizeof(sum));
	for(int i=1;i<=n;i++)
	{
		cin>>a[i].num;
		a[i].id=i;
	}
	sort(a+1,a+n+1,camp);
	for(int i=1;i<=n;i++)
		xxx[a[i].id]=i;
	for(int i=1;i<=n;i++)
	{
	//	cout<<"hi="<<xxx[i]<<" "<<endl; 
		change(xxx[i],1);
		ans+=query(xxx[i]+1);
	}
	cout<<ans<<endl;
}
