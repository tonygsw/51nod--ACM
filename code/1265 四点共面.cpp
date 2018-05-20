/*
    data:2018.5.15
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
ll t,x1,y11,z1,x2,y2,z2,x3,y3,z3;
int main()
{
    scanf("%lld",&t);
    for(int i=0;i<t;i++)
    {
        ll a1,a2,b1,b2,c1,c2;
        cin >> a1>>b1>>c1;
        cin >> a2>>b2>>c2;
        x1=a2-a1,y11=b2-b1,z1=c2-c1;
        cin >> a2>>b2>>c2;
        x2=a2-a1,y2=b2-b1,z2=c2-c1;
        cin >> a2>>b2>>c2;
        x3=a2-a1,y3=b2-b1,z3=c2-c1;
        if((x1*y2*z3+x2*y3*z1+x3*y11*z2-x1*z2*y3-y11*x2*z3-z1*y2*x3)==0)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
}
