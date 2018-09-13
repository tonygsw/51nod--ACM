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
map<char,int>vis;
void init()
{
    for(char i='a';i<='z';i++)
        vis[i]=0;
    for(char i='A';i<='Z';i++)
        vis[i]=0;
}
class Node{
    public:
        char ch;
        int num;
};
Node node[100];
bool camp(Node a,Node b)
{
    return a.num>b.num;
}
int main()
{
    init();
    string a;
    cin>>a;int len=1;
    for(int i=0;i<a.length();i++)
    {
        if(vis[a[i]]==0)
        {
            node[len].ch=a[i];
            node[len].num=1;
            vis[a[i]]=len;
            len++;
        }
        else    node[vis[a[i]]].num++;
    }
    sort(node+1,node+len,camp);
    ll ans=0,per=26;
    for(int i=1;i<len;i++)
    {
        ans+=node[i].num*per;
        per--;
    }
    cout<<ans<<endl;
}
