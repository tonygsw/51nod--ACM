#define ll long long
#define IO ios::sync_with_stdio(false);


#include<stdio.h>
#include<math.h> 
#include<string.h>
#include<iostream>
#include<algorithm>
using namespace std;
int judge(int n,int p)
{
	int ans=0;
	while(n!=0)
	{
		ans+=pow(n%10,p);
		n=n/10;
	}
	return ans;
} 
int main()
{
	int n;
	scanf("%d",&n);//cin>>n;
	for(int i=n;;i++)
	{
		int p=1;
		
		if(i>9)p=2;
		if(i>99)p=3;
		if(i>999)p=4;
		if(i>9999)p=5;	
		if(judge(i,p)==i)
		{
			printf("%d\n",i);//cout<<i<<endl;
			break;
		}
	}
}
