/*
	data:2018.7.15
	author:tonygsw
	link:http://www.51nod.com/onlineJudge/questionCode.html#!problemId=1090
*/
#define ll long long
#define IO ios::sync_with_stdio(false);

#include<math.h>
#include<string.h>
#include<stdio.h>
#include<algorithm>
#include<iostream>
#include<map>
using namespace std;

map<int,int> vis;
int num[1005];
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&num[i]);
		vis[num[i]]=1;
	}
	sort(num,num+n);int tem=0,flag=0;
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			tem=-(num[i]+num[j]);
			if(tem<0)break;
			if(vis[tem]==1&&tem>num[j])
			{
				printf("%d %d %d\n",num[i],num[j],tem);
				flag=1;
			}
		}
	}
	if(flag==0)printf("No Solution\n");
}
