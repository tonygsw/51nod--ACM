#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;
class node{
	public:
		double n,an;
};
node no[20];

bool camp(node a,node b){
	return a.n>b.n;
}

int main(){
	memset(no,0,sizeof(no));
	int k,k1;
	double n1,an1;
	cin>>k;
	for(int i=0;i<k;i++){
		cin>>no[i].n>>no[i].an;
	}
	cin>>k1;
	for(int i=0;i<k1;i++){
		cin>>n1>>an1;
		int judge=0;
		for(int j=0;j<k;j++){
			if(n1==no[j].n){
				no[j].an=no[j].an+an1;
				judge=1; 
			}
		}
		if(judge==0){
			no[k].n=n1;  no[k].an=an1;
			k++;
		}
	}
	sort(no,no+k,camp);
	cout<<k;
	for(int i=0;i<k;i++) cout<<" "<<no[i].n<<" "<<no[i].an;
}
