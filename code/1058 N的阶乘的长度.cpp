#include<iostream>
#include<algorithm>
#include<math.h>
#include<string.h>
using namespace std;
#define pi 3.1415926
#define e 2.718281828459
int main()
{
	int n;
	cin>>n;
	int len=0.5*log10(2*pi*n)+n*log10(n/e)+1;
	cout<<len<<endl;
}
