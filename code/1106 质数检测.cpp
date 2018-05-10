#include<iostream>
#include<algorithm>
#include<string.h>
#include<stdio.h>
#include<math.h>
using namespace std;
#define ll long long
int prime[100005];int len_of_prime;
bool check[100005];
void init()
{
	memset(check,0,sizeof(check));
	len_of_prime=0;
	for(int i=2;i<100005;i++)
	{
		if(!check[i])
		prime[len_of_prime++]=i;
		for(int j=0;j<len_of_prime;j++)
		{
			if(i*prime[j]>100005)break;
			check[i*prime[j]]=1;
			if(i%prime[j]==0)break;
		}
	}
}
int main()
{
    init();
    int n;ll num;
    while(~scanf("%d",&n))
    {
        for(int i=0;i<n;i++)
        {
            int flag=0;
            scanf("%lld",&num);
            for(int j=0;j<len_of_prime&&prime[j]<num;j++)
                if(num%prime[j]==0)
                {
                    flag=1;
                    break;
                }
            if(flag==1)cout<<"No"<<endl;
            else cout<<"Yes"<<endl;
        }
    }
}
