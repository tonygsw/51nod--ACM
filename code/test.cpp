/*
	author:gsw
	data:2018.03.16
	link:http://118.190.20.162/view.page?gpid=T68
*/
#include<iostream>
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<algorithm>
#include<map>
using namespace std;
#define ll long long
int num[1005];
map<string,int> etonum;
string emonth[12]={"Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"};
string eweek[7]={"Sun","Mon","Tue","Wed","Thu","Fri","Sat"};
ll change(string s)
{
	if(s[0]>='0'&&s[0]<='9')
	{
		ll ans=0;
		for(int i=0;i<s.length();i++)
			ans=ans*10+s[i]-'0';
		return ans;
	}
	else return etonum[s];
}
string cut(string a,int be,int en)
{
	string tem;
	for(int i=be;i<en;i++)
		tem+=a[i];
	return tem;
}int pnum[65];
int process(string a)
{
	memset(pnum,0,sizeof(pnum));int len=0;
	if(a.find(",")==string::npos)
	{
		if(a.find("-")==string::npos)
		{
			if(a[0]=='*')
				return 65;	
			else
				pnum[len++]=change(a);
			return len;
		}
		else
		{
			int p=a.find("-");
			int left=change(cut(a,0,p));
			int right=change(cut(a,p+1,a.length()));
			for(int i=left;i<=right;i++)
				pnum[len++]=i;
			return len;
		}
		
	}
	else
	{
		while(a.find(",")!=string::npos)
		{
			int p=a.find(",");
			string aa=cut(a,0,p);
			a=cut(a,p+1,a.length());
			if(aa.find("-")==string::npos)
			{
				if(aa[0]=='*')
					return 65;
				else
					pnum[len++]=change(aa);
			}
			else
			{
				int p=aa.find("-");
				int left=change(cut(aa,0,p));
				int right=change(cut(aa,p+1,aa.length()));
				for(int i=left;i<=right;i++)
					pnum[len++]=i;
			}
		}
		if(a.length()!=0)
		{
			if(a.find("-")==string::npos)
			{
				if(a[0]=='*')
					return 65;	
				else
					pnum[len++]=change(a);
				return len;
			}
			else
			{
				int p=a.find("-");
				int left=change(cut(a,0,p));
				int right=change(cut(a,p+1,a.length()));
				for(int i=left;i<=right;i++)
					pnum[len++]=i;
				return len;
			}
		}
	}
}
void init()
{
		for(int i=0;i<12;i++)
		etonum[emonth[i]]=i+1;
	for(int i=0;i<7;i++)
		etonum[eweek[i]]=i;
}
int main()
{
	init();
	string a="Sun-Sat";
	cout<<process(a)<<endl;
	for(int i=0;i<process(a);i++)
		cout<<pnum[i]<<" ";
	
}
