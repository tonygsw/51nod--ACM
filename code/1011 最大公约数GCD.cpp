#include<iostream>
#include<math.h>
#include<string>
#include<stdio.h>
using namespace std;
#define ll long long
ll gcd(ll a,ll b)
{
	if(b==0)return a;
	else return gcd(b,a%b);
}
int main()
{
	ll a,b;
	cin>>a>>b;
	cout<<gcd(a,b)<<endl;
}
