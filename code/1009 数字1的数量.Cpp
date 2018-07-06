/*
    author:gsw
    data:2018.6.27
    link:http://www.51nod.com/onlineJudge/questionCode.html#!problemId=1009
*/
#define ll long long
#define IO ios::sync_with_stdio(false);

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
ll Sum1s( ll n )
{
    ll iCount = 0;
    ll iFactor = 1;

    ll iLowerNum = 0;
    ll iCurrNum = 0;
    ll iHigherNum = 0;
    while( n / iFactor != 0 )
    {
        iLowerNum = n - ( n / iFactor ) * iFactor;  //iLowerNum=n%ifactor ¸ü¼ò±ãÒ»Ð©
        iCurrNum = (n / iFactor ) % 10;
        iHigherNum = n / ( iFactor *10 );
        switch(iCurrNum )
        {
            case 0:
                iCount += iHigherNum * iFactor;
                break;
            case 1:
                iCount += iHigherNum * iFactor + iLowerNum + 1;
                break;
            default:
                iCount += ( iHigherNum + 1 ) * iFactor;
                break;
        }

        iFactor *= 10;
    }
    return iCount;
}

int main()
{
    ll n;
    cin>>n;

    cout << Sum1s(n)<<endl;
    return 0;
}
