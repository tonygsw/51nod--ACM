#include<iostream>
#include<string.h>
using namespace std;
int we[105];
int p[105];
int dp[105][10005];
int max(int a,int b){
	if(a>b) return a;
	else return b;
}
int main(){
	int n,w;
	memset(we,0,sizeof(we));
	memset(p,0,sizeof(p));
	memset(dp,0,sizeof(dp));
	cin>>n>>w;
	for(int i=1;i<=n;i++){
		cin>>we[i]>>p[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=w;j++){
			if(j<we[i])	dp[i][j]=dp[i-1][j];
			else dp[i][j]=max(dp[i-1][j-we[i]]+p[i],dp[i-1][j]);
		/*	for(int ii=0;ii<=n;ii++){
				cout<<"       "; 
				for(int jj=0;jj<=w;jj++){
					cout<<" "<<dp[ii][jj];
				}
				cout<<endl;
			}
			cout<<endl<<endl<<endl<<endl;*/
		}
	}
	cout<<dp[n][w]<<endl;
}
