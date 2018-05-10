/*
    author:gsw
    data:2018.3.12
    link:http://www.51nod.com/onlineJudge/questionCode.html#!problemId=1002
*/
#include<stdio.h>
#include<math.h>
#include<algorithm>
#include<string.h>
#include<iostream>
using namespace std;
#define ll long long
int num[505][505];
int n;
int main()
{
    while(~scanf("%d",&n))
    {
        for(int i=0;i<n;i++)
            for(int j=0;j<=i;j++)
                scanf("%d",&num[i][j]);
        for(int i=(n-2);i>=0;i--)
            for(int j=0;j<=i;j++)
                num[i][j]=max(num[i+1][j],num[i+1][j+1])+num[i][j];
        cout<<num[0][0]<<endl;
    }
}
