/*
    data:2018.7.15
    author:tonygsw
    link:http://www.51nod.com/onlineJudge/questionCode.html#!problemId=1083
*/
#define ll long long
#define IO ios::sync_with_stdio(false);

#include<math.h>
#include<stdio.h>
#include<string.h>
#include<iostream>
#include<algorithm>
using namespace std;
ll matrix[505][505];
void init()
{
    memset(matrix,0,sizeof(matrix));
}
ll dp(int n)
{
    for(int i=1;i<n;i++)
    {
        matrix[i][0]+=matrix[i-1][0];
        matrix[0][i]+=matrix[0][i-1];
    }
    for(int i=1;i<n;i++)
    {
        for(int j=1;j<n;j++)
            matrix[i][j]=matrix[i][j]+max(matrix[i-1][j],matrix[i][j-1]);
    }
    return matrix[n-1][n-1];
}
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            scanf("%lld",&matrix[i][j]);
    printf("%lld\n",dp(n));
}
