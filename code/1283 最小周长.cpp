/*
	author:gsw
	data:2018.8.6
	link:http://www.51nod.com/onlineJudge/questionCode.html#!problemId=1091
*/
#define IO ios::sync_with_stdio(false);
#define ll long long

#include<map>
#include<math.h>
#include<vector>
#include<stdio.h>
#include<string.h>
#include<iostream>
#include<iterator>
#include<algorithm>
using namespace std;

int main()
{
    int s;
    cin>>s;int len=sqrt(s);int ans=1+s;
    for(int i=2;i<=len;i++)
    {
        if(s%i!=0)continue;
        ans=min(ans,i+s/i);
    }
    cout<<2*ans<<endl;
}
