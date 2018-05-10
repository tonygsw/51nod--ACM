#include<iostream>
#include<algorithm>
#include<math.h>
#include<stdio.h>
#include<string.h>
using namespace std;
int n1,n2;
void init()
{
	if(n1<n2)
	{
		int tem=n1;
		n1=n2;
		n2=tem;
	}
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		cin>>n1>>n2;
		init();
		if(int((n1-n2)*1.6180339887)==n2)
			cout<<"B"<<endl; 
		else cout<<"A"<<endl;
	}
}
