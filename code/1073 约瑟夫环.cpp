#include <cstdio>
#include <iostream>
using namespace std;
int main()
{
    int ans,n,k;
    scanf("%d%d",&n,&k); 
        ans=0;
        for(int i=2;i<=n;i++)
        ans=(ans+k)%i;
        printf("%d\n",ans+1);
    return 0;
}
