/*
    author:tony
    data:2018.10.14
    link:http://www.51nod.com/onlineJudge/questionCode.html#!problemId=1062
*/
#define ll long long

const int maxn=100005;

#include<math.h>
#include<stdio.h>
#include<string.h>
#include<iostream>
#include<algorithm>
#include<algorithm>
using namespace std;

ll num[maxn];
ll ma[maxn];
void init()
{
    num[0]=0,num[1]=1;
    ma[0]=0,ma[1]=1;
    for(int i=2;i<maxn;i++)
    {
        if(i%2==0)num[i]=num[i/2];
        else num[i]=num[(i-1)/2]+num[(i+1)/2];
        ma[i]=max(ma[i-1],num[i]);
    }
}

int main()
{
    init();
    int t,a;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>a;
        cout<<ma[a]<<endl;
    }
}
