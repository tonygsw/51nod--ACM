#include<iostream>
#include<math.h>
#include<algorithm>
#include<cstdio>
using namespace std;
#define ll long long
int dp[1005][1005];
string ans;
string str1,str2;
void DP()
{
	for(int i=0;i<1005;i++)
		dp[i][0]=0,dp[0][i]=0;
	for(int i=1;i<=str1.length();i++)
	{
		for(int j=1;j<=str2.length();j++)
			if(str1[i-1]==str2[j-1])
				dp[i][j]=dp[i-1][j-1]+1;
			else if(dp[i-1][j]>dp[i][j-1])
				dp[i][j]=dp[i-1][j];
			else
				dp[i][j]=dp[i][j-1];
	}
	int i=str1.length();
	int j=str2.length();
	ans.clear();
	while(i>0&&j>0)
	{
		if(str1[i-1]==str2[j-1])
		{
			ans+=str1[i-1];
			i--;j--;
		}
		else if(dp[i-1][j]>dp[i][j-1])i--;
		else j--;
	}
}
int main()
{
	cin>>str1;
	cin>>str2;
	DP();
//	cout<<dp[str1.length()][str2.length()]<<endl;
	reverse(ans.begin(),ans.end());
	cout<<ans<<endl;
}
