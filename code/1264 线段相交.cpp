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

double x1,y11,x2,y2,x3,y3,x4,y4;
bool judge()
{
    if(max(x1,x2)<min(x3,x4)||max(x3,x4)<min(x1,x2)
    ||max(y11,y2)<min(y3,y4)||max(y3,y4)<min(y11,y2))
        return false;
    double abc=(x2-x1)*(y3-y2)-(y2-y11)*(x3-x2);
    double abd=(x2-x1)*(y4-y2)-(y2-y11)*(x4-x2);
    double dca=(x4-x3)*(y11-y3)-(y4-y3)*(x1-x3);
    double dcb=(x4-x3)*(y2-y3)-(y4-y3)*(x2-x3);
    if(abc*abd<=0&&dca*dcb<=0)return true;
    return false;
}
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        cin>>x1>>y11>>x2>>y2>>x3>>y3>>x4>>y4;
        if(judge())cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    return 0;
}
