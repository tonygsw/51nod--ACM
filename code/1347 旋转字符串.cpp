/*
    author:tonygsw
    data:2018.8.9
    link:http://www.51nod.com/onlineJudge/questionCode.html#!problemId=1347
*/
#define ll long long
#define IO ios::sync_with_stdio(false);

#include<math.h>
#include<stdio.h>
#include<string.h>
#include<iostream>
using namespace std;
string str;
bool judge(string a)
{
    int m=a.length()/2;
    for(int i=0;i<m;i++)
        if(a[i]!=a[i+m])return false;
    return true;
}
int main()
{
	while(cin>>str)
	{
		if(str.length()%2!=0)
		{
			cout<<"NO"<<endl;
			continue;
		}
		else if(judge(str))cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
}
