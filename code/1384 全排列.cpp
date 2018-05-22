/*
    data:2018.5.21
    author:gsw
    link:http://www.51nod.com/onlineJudge/questionCode.html#!problemId=1384
*/
#define ll long long
#define IO ios::sync_with_stdio(false);

#include<math.h>
#include<stdio.h>
#include<string.h>
#include<iostream>
#include<algorithm>

using namespace std;

int tem[10];
int main()
{
    string s;
    IO;
    cin.tie(false);
    cin>>s;
    for(int i=0;i<s.length();i++)
        tem[i]=s[i]-'0';
    sort(tem,tem+s.length());
    do
    {
        for(int i=0;i<s.length();++i)
            cout<<tem[i];
        cout<<endl;
    }while(next_permutation(tem,tem+s.length()));
}
