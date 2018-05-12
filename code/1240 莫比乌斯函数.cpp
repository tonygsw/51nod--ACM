/*
    data:2018.5.12
    author:gsw
    link:http://www.51nod.com/onlineJudge/questionCode.html#!problemId=1240
    account:2684524947@qq.com
*/
#define ll long long
#define IO ios::sync_with_stdio(false);

#include<math.h>
#include<iostream>
#include<algorithm>
#include<string.h>
#include<stdio.h>
using namespace std;
int prime(int n)
{
    int m=sqrt(n)+1;
    int kk=0;
    for(int i=2;i<=m;i++)
    {
        if(n%i==0)
        {
            int cnt=0;
            while(n%i==0)
            {
                n=n/i;
                cnt++;
                if(cnt>=2)return 0;
            }
            kk++;
        }
    }
    if(n>1)kk++;
    if(kk%2==0)return 1;
    return -1;
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d\n",prime(n));
    main();
    return 0;
}
