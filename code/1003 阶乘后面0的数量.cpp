/*
    author:gsw
    data:2018.6.27
    link:http://www.51nod.com/onlineJudge/questionCode.html#!problemId=1003
*/
#define ll long long
#define IO ios::sync_with_stdio(false);
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
ll n;
int main()
{
    cin>>n;
    int ans=0;
    while(n!=0)
    {
        ans+=n/5;
        n=n/5;
    }
    cout<<ans<<endl;
}
