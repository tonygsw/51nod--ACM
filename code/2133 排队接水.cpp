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
int n;int num[1005];
int main()
{
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        scanf("%d",&num[i]);
    sort(num,num+n);
    ll ans=0,k=0;
    for(int i=0;i<n;i++)
    {
        k+=num[i];
        ans+=k;
    }
    cout<<ans<<endl;


}
