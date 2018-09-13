/*
    data:2018.9.9
    author:tony
    link:http://www.51nod.com/onlineJudge/questionCode.html#!problemId=2020
*/
#define ll long long
#define IO ios::sync_with_stdio(false);

#include<iostream>
#include<math.h>
#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;

ll num[100005];int len=0;
ll MAX = 1e18+5;
void init()
{
    for(ll i=1;i<=MAX;i=i*2)
    {
        for(ll j=1;i*j<=MAX;j=j*3)
        {
            for(ll k=1;i*j*k<=MAX;k=k*5)
                num[len++]=i*j*k;
        }
    }
    sort(num,num+len);
}
int main()
{
    init();
    int t;ll n;
    scanf("%d",&t);
    while(t--)
    {
        cin>>n;
        printf("%lld\n", *lower_bound(num+1, num+len,n));
    }
}
