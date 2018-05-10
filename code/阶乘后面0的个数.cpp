#include<iostream>
using namespace std;
long long jc(int n){
	if(n==1)	return 1;
	else return n*jc(n-1);
}
int main(){
	for(int i=1;i<100;i++){
		cout<<jc(i)<<endl; 
	}
}
