/*
	author:gsw
	data:2018.8.6
	link:http://www.51nod.com/onlineJudge/questionCode.html#!problemId=1091
*/
#define IO ios::sync_with_stdio(false);
#define ll long long

#include<map>
#include<math.h>
#include<vector>
#include<stdio.h>
#include<string.h>
#include<iostream>
#include<iterator>
#include<algorithm>
using namespace std;
class Node
{
public:
    int num,flag;
};
Node node[100005];
int len=0;
int main()
{
    int n;Node tem;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d%d",&tem.num,&tem.flag);
        if(len==0)node[len++]=tem;
        else if(node[len-1].flag==tem.flag)node[len++]=tem;
        else if(node[len-1].flag==0&&tem.flag==1)node[len++]=tem;
        else
        {
            while(node[len-1].flag==1)
            {
                if(node[len-1].num>tem.num)
                {
                    tem.num=-1;
                    break;
                }
                else len--;
            }
            if(tem.num!=-1)node[len++]=tem;
        }
    }
    cout<<len<<endl;
    return 0;
}
