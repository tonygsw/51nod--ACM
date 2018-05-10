#include<cstdio>
#include<cmath>
#include<cstring>
#include<algorithm>
#define N 2333
#define ll long long
using namespace std;
namespace runzhe2000
{
    /*以下打表找规律*/
    int a[N][N], n;
    bool dfs(int x)
    {
        int have = 0; for(int i = 1; i <= n; i++) if(a[x][i]) {have = 1; break;} if(!have) return 1;
        for(int i = 1; i <= n; i++) if(a[x][i])
        {
            memcpy(a[x+1], a[x], sizeof(a[x]));
            a[x+1][i]--; sort(a[x+1]+1, a[x+1]+n+1);
            if(!dfs(x+1)) return 1;
        }
        for(int i = 1; i <= n; i++) if(a[x][i])
        {
            for(int j = 2; j < a[x][i]; j++) if(a[x][i] % j == 0)
            {
                memcpy(a[x+1], a[x], sizeof(a[x]));
                a[x+1][i] = j;
                sort(a[x+1]+1, a[x+1]+n+1);
                if(!dfs(x+1)) return 1;
            }
        }
        return 0;
    }
    void solve(int nn)
    {
        memset(a,0,sizeof(a));
        n = nn; a[1][n] = n;  bool nop = 0; int tmp = dfs(1);
        for(int i = 2; i < nn; i++)  if(nn % i == 0) nop = 1;
        printf("%d(%d) : %d --> %d\n",nn,nop?0:1,tmp?1:0,(nop==tmp));
    }
    void check(int lim)
    {
        for(int i = 1; i <= lim; i++)
            solve(i);
    }
    /*以上打表找规律*/
    void main()
    {
    //  check(300);
        int T; scanf("%d",&T);
        for(; T--; )
        {
            int n, nop = 0; scanf("%d",&n);
            for(int i = 2, ii = sqrt(n); i <= ii; i++) if(n % i == 0) {nop = 1; break;}
            if(!nop) {puts(n==2||n==17?"TAK":"NIE");}
            else puts(n==16||n==34||n==289?"NIE":"TAK");
        }
    }
}
int main()
{
    runzhe2000::main();
}
