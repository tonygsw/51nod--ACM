#include <iostream>
#include <string>
using namespace std;
int p[1000]={0},q[1000]={0};
void Initialize(int t[]) 
{ 
int i;
  string s; 
  cin>>s;
  t[0]=s.length();  
  for(i=1;i<=t[0];i++)
    t[i]=s[t[0]-i]-'0'; 
}
void Print(int t[])  
{
  int i;
  if (t[0]==0)
  {
	  cout<<0<<endl;
	  return;
  }
  for(i=t[0];i>0;i--) 
  {
	  cout<<t[i];
  }
  cout<<endl;
  return ;
}

void  Addition(int a[],int b[]) 
{ int i; 
  if(a[0]<b[0])a[0]=b[0];    
  for(i=1;i<=a[0];i++) a[i]+=b[i];   
  for(i=1;i<=a[0];i++)
    { a[i+1]+=a[i]/10;
      a[i]%=10;
    } 
  if(a[a[0]+1]>0) a[0]++;
}
int main()
{
  Initialize(p);
  Initialize(q);
  Addition(p,q);
  Print(p);
   return 0;
}

