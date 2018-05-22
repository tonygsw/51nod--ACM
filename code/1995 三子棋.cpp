/*
    data:2018.5.21
    author:gsw
    link:http://www.51nod.com/onlineJudge/questionCode.html#!problemId=1995
    tip：错误代码
*/
#define ll long long
#define IO ios::sync_with_stdio(false);

#include<math.h>
#include<stdio.h>
#include<string.h>
#include<iostream>
#include<algorithm>
using namespace std;
int a[3][4];
int judge()
{
    int cunt=0;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            if(a[i][j]==1)
            {
                cunt++;
                if((j+1)<4&&(j+2)<4&&a[i][j+1]==1&&a[i][j+2]==1)return 1;
                if((i+1)<3&&(i+2)<3&&a[i+1][j]==1&&a[i+2][j]==1)return 1;
                if((i+1)<3&&(i+2)<3&&(j+1)<4&&(j+2)<4&&a[i+1][j+1]==1&&a[i+2][j+2]==1)return 1;
            }
            if(a[i][j]==-1)
            {
                cunt++;
                if((j+1)<4&&(j+2)<4&&a[i][j+1]==-1&&a[i][j+2]==-1)return -1;
                if((i+1)<3&&(i+2)<3&&a[i+1][j]==-1&&a[i+2][j]==-1)return -1;
                if((i+1)<3&&(i+2)<3&&(j+1)<4&&(j+2)<4&&a[i+1][j+1]==-1&&a[i+2][j+2]==-1)return -1;
            }
        }
    }
    if(cunt==12)return 0;
    else return 2333;
}
class Statue
{
    public:
        int result;
        int step;
};
Statue hua(int cnt);
Statue ming(int cnt)
{
    Statue ans;
    ans.result=-10;
    ans.step=1000;
    if(judge()!=2333)
    {
        Statue t;
        t.result=judge();
        t.step=cnt;
        return t;
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            if(a[i][j]!=0)continue;
            a[i][j]=1;
            Statue tem=hua(cnt+1);
            if(tem.result>ans.result)
            {
                ans.result=tem.result;
                ans.step=min(ans.step,tem.step);
            }
            if(tem.result==ans.result)ans.step=min(ans.step,tem.step);
        }
    }
    return ans;
}
Statue hua(int cnt)
{
    Statue ans;
    ans.result=10;
    ans.step=1000;
    if(judge()!=2333)
    {
        Statue t;
        t.result=judge();
        t.step=cnt;
        return t;
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            if(a[i][j]!=0)continue;
            a[i][j]=-1;
            Statue tem=ming(cnt+1);
            if(tem.result<ans.result)
            {
                ans.result=tem.result;
                ans.step=min(ans.step,tem.step);
            }
            if(tem.result==ans.result)ans.step=min(ans.step,tem.step);
        }
    }
    return ans;
}
Statue bns[3][4];
void solve()
{
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            memset(a,0,sizeof(a));
            a[i][j]=1;
            Statue tem=hua(1);
            bns[i][j]=tem;
        }
    }
    return;
}

int main()
{
    solve();

   for(int i=0;i<3;i++)
   for(int j=0;j<4;j++)
           cout<<bns[i][j].result<<" "<<bns[i][j].step<<endl;


    int t,a,b;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        scanf("%d%d",&a,&b);
        a--;b--;
        if(bns[a][b].result==1)
        {
            printf("Lose\n");printf("%d\n",bns[a][b].step);
        }
        if(bns[a][b].result==0)
        {
            printf("Equal\n");printf("%d\n",bns[a][b].step);
        }
        if(bns[a][b].result==-1)
        {
            printf("Win\n");printf("%d\n",bns[a][b].step);
        }
    }
}
