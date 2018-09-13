/*
    data:2018.9.9
    author:tony
    link:http://www.51nod.com/onlineJudge/questionCode.html#!problemId=2020
*/
#define ll long long
#define IO ios::sync_with_stdio(false);

#include<iostream>
#include<math.h>
#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;
int t,n,k;
void change()
{
    int num[4];
    for(int i=0;i<4;i++)
        num[i]=n%10,n=n/10;
    sort(num,num+4);
    int a=0,b=0;
    for(int i=0;i<4;i++)
    {
        a=a*10+num[i];
        b=b*10+num[3-i];
    }
    //cout<<a<<" "<<b<<endl;
    n=abs(a-b);

}
int main()
{
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d",&n,&k);
        for(int i=0;i<k;i++)
            change();
        cout<<n<<endl;
    }
}
