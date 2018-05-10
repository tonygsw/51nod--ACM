#include<iostream>
using namespace std;
int q_mod(long long a, long long b)
{
    long long ans = 1;
    while(b)
    {  
        if(b&1) ans = (ans * a) % 10;
        a = ((a%10)*(a % 10));
        b>>=1;  
    }
    return ans;
}
int main()  
{
    long long n;  
    cin>>n;  
    cout<<q_mod(n,n);  
    return 0;  
} 
