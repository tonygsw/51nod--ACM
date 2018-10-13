/*
    author:tony
    data:2018.10.12
    link:http://www.51nod.com/onlineJudge/questionCode.html#!problemId=1042
*/
#define ll long long


#include<stdio.h>
#include<string.h>
#include<iostream>
#include<algorithm>
using namespace std;

ll ans[11];ll pow[20];
void init()
{
    memset(ans,0,sizeof(ans));
}
void dp(ll num,ll flag)
{
    if(num==-1)
    {
        ans[0]++;
        return;
    }
    for(int j=1;j<10;j++)
    {
        for(ll i=1;pow[i-1]<=num;i++)
        {
            ll len=i-1;
            ll l=num/pow[i],r=num%pow[i-1];
            ll t=(num/pow[i-1])%10;
            if(j>t)ans[j]+=l*pow[len]*flag;
            else if(j<t)ans[j]+=(l+1)*pow[len]*flag;
            else ans[j]+=(l*pow[len]+r+1)*flag;
        }
    }
    for(ll i=1;pow[i-1]<num;i++)
    {
        ll len=i-1;
        ll l=num/pow[i],r=num%pow[i-1];
        ll t=(num/pow[i-1])%10;
        if(t!=0)ans[0]+=l*pow[len]*flag;
        else ans[0]+=((l-1)*pow[len]+r+1)*flag;
    }
}
int main()
{
    ll a,b;
    cin>>a>>b;
    init();
    pow[0]=1;
    for(int i=1;i<20;i++)pow[i]=pow[i-1]*10;
    dp(b,1);
    dp(a-1,-1);
    for(int i=0;i<=9;i++)
        cout<<ans[i]<<endl;
}
