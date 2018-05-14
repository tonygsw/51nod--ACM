/*
    data:2018.5.13
    author:gsw
    link:http://www.51nod.com/onlineJudge/questionCode.html#!problemId=1256
*/
#define ll long long
#define IO ios_with_sync(false);

#include<iostream>
#include<algorithm>
#include<math.h>
#include<stdio.h>
#include<string.h>
using namespace std;

void extend_gcd(int a,int b,int &x,int &y)
{
    if(b==0)
    {
        x=1;
        y=0;
        return;
    }
    extend_gcd(b,a%b,x,y);
    int t=x;
    x=y;
    y=t-a/b*y;
    return;
}
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int x,y;
    extend_gcd(a,b,x,y);
    while (x<0)x=x+b;
    cout<<x<<endl;
    return 0;
}
