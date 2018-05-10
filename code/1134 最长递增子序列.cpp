/*
    data:2018.03.13
    author:gsw
    link:http://www.51nod.com/onlineJudge/questionCode.html#!problemId=1130
*/
#include<iostream>
#include<algorithm>
#include<string.h>
#include<stdio.h>
#include<math.h>
using namespace std;
#define ll long long
ll num[50005];
ll de[50005];int end=0;
int findd(int num)
{
	int l=0;int r=end;
	while(l<=r)
	{
		//cout<<l<<" "<<r<<endl;
		int mid=(l+r)/2;
		if(de[mid]<num)l=mid+1;
		else if(de[mid]>num)r=mid-1;
		else return mid;
	}
	return l;
}
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		scanf("%lld",&num[i]);
	de[end++]=num[0];
	for(int i=1;i<n;i++)
	{
		if(num[i]>de[end-1])de[end++]=num[i];
		if(num[i]==de[end-1])continue;
		int pos=findd(num[i]);
		de[pos]=num[i];
	}
	cout<<end<<endl;
}
