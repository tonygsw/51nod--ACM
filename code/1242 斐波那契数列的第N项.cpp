/*
    data:2018.5.13
    author:gsw
    link:http://www.51nod.com/onlineJudge/questionCode.html#!problemId=1242
*/
#define ll long long
#define IO ios_with_sync(false);

#include<iostream>
#include<algorithm>
#include<math.h>
#include<stdio.h>
#include<string.h>
using namespace std;

ll mod=1000000009;
class Matrix
{
    public:
        ll matrix[2][2];
};
Matrix a,b,ans;

void init()
{
    a.matrix[0][0]=1;a.matrix[0][1]=1;a.matrix[1][0]=1;a.matrix[1][1]=0;
    b.matrix[0][0]=1;b.matrix[0][1]=0;b.matrix[1][0]=0;b.matrix[1][1]=0;
    memset(ans.matrix,0,sizeof(ans.matrix));
    ans.matrix[0][0]=1;ans.matrix[1][1]=1;
}
Matrix mul(Matrix a1,Matrix a2)
{
    Matrix ans;
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            ans.matrix[i][j] = 0;
            for(int k = 0 ; k <2; k++)
            {
                ans.matrix[i][j] +=a1.matrix[i][k]*a2.matrix[k][j]%mod;
                ans.matrix[i][j]%=mod;
            }
        }
    }
    return ans;
}
void fast_mod(ll n)
{
    while (n>0)
    {
        if(n&1)ans=mul(ans,a);
        a=mul(a,a);
        n=n>>1;
    }
}

int main()
{
    ll n;
    scanf("%lld",&n);
    init();
    fast_mod(n-1);
    b=mul(b,ans);
    cout<<b.matrix[0][0]<<endl;
    //main();
}
