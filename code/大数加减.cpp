#include<iostream>
#include<string>
#include<string.h>
#include<cmath>
using namespace std;

int a1[10005],b1[10005];
string a,b;
int conta,contb,c=0,jw=0;

int max(int x,int y){
	if(x>y) return x;
	else return y;
}

void change(){
	if(a[0]=='-'){
		for(int i=(a.length()-1);i>=1;i--){
			cout<<"a[i]="<<a[i]<<" ";
			a1[conta]=-(a[i]-'0');
			conta++;
		}
	}
	else{
		for(int i=(a.length()-1);i>=0;i--){
			cout<<"a[i]="<<a[i]<<" ";
			a1[conta]=a[i]-'0';
			conta++;
		}
	}
	cout<<endl;
	if(b[0]=='-'){
		for(int i=(b.length()-1);i>=1;i--){
			cout<<"b[i]="<<b[i]<<" ";
			b1[contb]=-(b[i]-'0');
			contb++;
		}
	}
	else{
		for(int i=(b.length()-1);i>=0;i--){
			cout<<"b[i]="<<b[i]<<" ";
			b1[contb]=b[i]-'0';
			contb++;
		}
	}
	cout<<endl;
}
void add(){	
	for(int i=0;i<max(conta,contb);i++){
		c=a1[i]+b1[i]+jw;
		if(c<0&&((a[i]!='-'&&b[i]=='-')||(a[i]=='-'&&b[i]!='-'))){
			c=c+10;
			jw=-1;
		}
		else{
			jw=c/10;
			c=c%10;
		}
		a1[i]=c;
	}
}
int main(){
	memset(a1,0,sizeof(a1));
	memset(b1,0,sizeof(b1));
	cin>>a>>b;
	if(a.length()>b.length()){
		string c=a;
		a=b;
		b=c;
	}
	change();  add(); 
	if(jw==-1) cout<<"-";
    else if(jw!=0) cout<<jw;
	for(int i=max(conta,contb)-1;i>=0;i--){
		cout<<abs(a1[i]);
	}
}
