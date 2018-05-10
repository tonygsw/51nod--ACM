#include<iostream>
#include<math.h>
#include<algorithm>
#include<cstdio>
using namespace std;
#define ll unsigned long long
ll tema,temb,a,b;
void cg()
{
	if(a>b)
	{
		temb=a;
		tema=b;
	}
	else
	{
		tema=a;
		temb=b;
	}
}
int main()
{
    int t;
    cin>>t;
  //  freopen("ans.txt","w",stdout);
	while(t--)
	{
	    cin>>a>>b;
		cg();
		double aa=1.618033988749894848204586834365638117720309179805762862135448622705260462818902449707207204189391;
		ll minx=((double)(temb-tema))*a;
		if(minx==tema)
			cout<<"B"<<endl;
		else
			cout<<"A"<<endl;
	}
}
