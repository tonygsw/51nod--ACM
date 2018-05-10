#include<iostream>
#include<string.h>
#include<stdio.h>
#include<algorithm>
using namespace std;
class node{
	public:
	int x,y;
};
int no[50000];
node ans[50000];
int main(){
	//memset(no,0,sizeof(no));
//	memset(ans,0,sizeof(ans));
	int kk,n;
	scanf("%d%d",&kk,&n);
	int j=0;
	for(int i=0;i<n;i++){
		scanf("%d",&no[i]);
	}
	sort(no,no+n);	int judge=0;
	for(int i=0;i<n;i++){
		if (no[i]+no[n-1] <kk)
        {
            continue;
        }
		for(int k=i+1;k<n;k++){
			if(no[i]+no[k]==kk){
				ans[j].x=no[i];ans[j].y=no[k];
				j++;
			}
			else if(no[i]+no[k]>kk){
				break;
			}
		}
	}
	if(j==0) cout<<"No Solution"<<endl;
	else{
	//	sort(ans,ans+j,camp);
		for(int i=0;i<j;i++)	cout<<ans[i].x<<" "<<ans[i].y<<endl;
	}
} 
