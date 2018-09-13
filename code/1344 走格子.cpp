/*
	author:tonygsw
	data:2018.8.8
	link:http://www.51nod.com/onlineJudge/questionCode.html#!problemId=1344
*/
#define ll long long
#define IO ios::sync_with_stdio(flase);

#include<math.h>
#include<stdio.h>
#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;
int n;
ll num[50005];
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>num[i];
	ll ans=0,total=0;
	for(int i=0;i<n;i++)
	{
		total+=num[i];
		ans=min(ans,total);
	}
	if(ans>=0)cout<<0<<endl;
	else cout<<-ans<<endl;
}
