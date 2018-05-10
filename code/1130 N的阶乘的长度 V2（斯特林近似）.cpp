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

int main()
{
	double pi=3.14159265358;
double e=2.718281828459;
	int n;
	while(~scanf("%d",&n))
	{
		int num;
		double pi2=2*pi;
		for(int i=0;i<n;i++)
		{
			
			scanf("%d",&num);
			double ans=(log10(pi2*num)/2+num*log10(num/e));
			ll a=ans;
			cout<<a+1<<endl;
		}
	}

}
