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
    ll n;
    cin>>n;
    cout<<n-(n/2+n/3+n/5+n/7
             -n/6-n/10-n/14-n/15-n/21-n/35
             +n/30+n/42+n/105+n/70
             -n/210)<<endl;
    return 0;

}
