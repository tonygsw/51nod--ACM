#include<iostream>
#include<string.h>
#include<math.h>
#include<algorithm>
#include<stdio.h>
using namespace std;
char str[300000],str1[300000];
int rl[300000];int maxright,pos;
void init()
{
    memset(rl,0,sizeof(rl));
    pos=0;
    maxright=0;
}
int main()
{
    while(scanf("%s",str1)!=EOF){
    init(); 
    //cin>>str1;
    str[0]='#';
    int s=1;
    for(int i=0;str1[i]!='\0';i++)
    {
        str[s++]=str1[i];
        str[s++]='#';
    }
    int ans=0;
    //cout<<str<<endl;
    for(int i=0;str[i]!='\0';i++)
    {
        if(i<maxright)
            rl[i]=min(rl[2*pos-i],maxright-i);
        else
            rl[i]=1;
        while(i-rl[i]>=0&&(str[i-rl[i]]==str[i+rl[i]]))
            rl[i]+=1;
        if(rl[i]+i-1>maxright)
        {
            maxright=rl[i]+i-1;
            pos=i;
        }
        ans=max(ans,rl[i]);
    }
    printf("%d",ans-1);
    }
    //cout<<ans-1<<endl;

}
