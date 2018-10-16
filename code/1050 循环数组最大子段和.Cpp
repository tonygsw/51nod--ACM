/*
    author:tony
    data:20018.10.17
    link:http://www.51nod.com/onlineJudge/questionCode.html#!problemId=1050
正常数组中间的某一段和最大。这个可以通过普通的最大子段和问题求出。
此数组首尾相接的某一段和最大。这种情况是由于数组中间某段和为负值，且绝对值很大导致的，那么我
们只需要把中间的和为负值且绝对值最大的这一段序列求出，用总的和减去它就行了。
 即，先对原数组求最大子段和，得到ans1，然后把数组中所有元素符号取反，再求最大子段和，得到ans2，
原数组的所有元素和为ans，那么最终答案就是 max(ans1, ans + ans2)。
--------------------- 

*/
#define ll long long

#include<math.h>
#include<stdio.h>
#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;

const int maxn=50000;

int n;ll num[maxn];

ll maxnlen()
{
	ll sum=0,ans=0;
	for(int i=0;i<n;i++)
	{
		if(sum<0)sum=0;
		sum+=num[i];
		ans=max(ans,sum); 
	}
	return ans;
}
int main()
{
    scanf("%d",&n);
    int flag=0;ll total=0;
    for(int i=0;i<n;i++)
    {
        scanf("%lld",&num[i]);
        total+=num[i];
        if(num[i]>0)flag=1;
    }
    ll ans=0,ans1=0;
    ans=maxnlen();
    for(int i=0;i<n;i++)
    	num[i]=-num[i];
    ans1=maxnlen();
    cout<<max(ans,total+ans1)<<endl;
}

/*

6
-4 13 -5 -2 -2 11

*/
