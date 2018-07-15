/*
    data:2018.7.15
    author:tonygsw
    link:http://www.51nod.com/onlineJudge/questionCode.html#!problemId=1087
*/
#define ll long long
#define IO ios::sync_with_stdio(false);

#include<math.h>
#include<stdio.h>
#include<string.h>
#include<iostream>
#include<algorithm>
using namespace std;
// n*(n-1)/2+1
int main()
{
    int n;ll num;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%lld",&num);
        num=(num-1)*2;
        ll sq=sqrt(num);
        if(sq*(sq+1)==num)printf("1\n");
        else printf("0\n");
    }
}
