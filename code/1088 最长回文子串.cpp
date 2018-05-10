#include<iostream>
#include<string.h>
#include<math.h>
#include<algorithm>
#include<stdio.h>
using namespace std;
char str[3005],str1[3005];
int rl[3005];int maxright,pos;
void init()
{
    memset(rl,0,sizeof(rl));
    pos=0;
    maxright=0;
}
int main()
{
    scanf("%s",str1);
    //cin>>str1;
    str[0]='#';
    int s=1;
    for(int i=0;i<strlen(str1);i++)
    {
        str[s++]=str1[i];
        str[s++]='#';
    }
    int ans=0;
    //cout<<str<<endl;
    for(int i=0;i<strlen(str);i++)
    {
        if(i<maxright)
            rl[i]=min(rl[2*pos-i],maxright-i);
        else
            rl[i]=1;
        while((i-rl[i])>=0&&(i-rl[i])<strlen(str)&&(str[i-rl[i]]==str[i+rl[i]]))
            rl[i]+=1;
        if(rl[i]+i-1>maxright)
        {
            maxright=rl[i]+i-1;
            pos=i;
        }
        ans=max(ans,rl[i]);
    }
    cout<<ans-1<<endl;

}
