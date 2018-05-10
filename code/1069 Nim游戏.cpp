#include<iostream>
#include<algorithm>
#include<stdio.h>
#include<math.h>
#include<string.h>
using namespace std;
int main()
{
	int n,num;
	cin>>n;
	int flag=0;
	int ans=0;
	for(int i=0;i<n;i++)
	{
		cin>>num;
		ans=ans^num;
	}
	if(ans==0)cout<<"B";
	else cout<<"A"<<endl;
}

