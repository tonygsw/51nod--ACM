/*
    author:tony
    data:2018.10.11
    link:http://www.51nod.com/onlineJudge/questionCode.html#!problemId=1031
*/
#define ll long long

const int maxn=1005;
const int mod=1e9+7;

#include<math.h>
#include<stdio.h>
#include<string.h>
#include<iostream>
#include<algorithm>
using namespace std;

int fc[maxn];
void init()
{
    fc[1]=1;fc[2]=2;
    for(int i=3;i<maxn;i++)
        fc[i]=(fc[i-1]+fc[i-2])%mod;
}
int main()
{
    init();
    int n;
    cin>>n;
    cout<<fc[n]<<endl;
}
