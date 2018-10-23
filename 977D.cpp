#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <algorithm>
#define ll long long
using namespace std;
const int maxn=105;
struct num
{
    ll num,d3,d2;//3^d3*2^d2
}a[maxn];
bool cmp(num n1,num n2)
{
    if(n1.d3>n2.d3)
        return true;
    else if(n1.d3==n2.d3)
    {
        if(n1.d2<n2.d2)
            return true;
        else
            return false;
    }
    else
        return false;
}
int main()
{
	std::ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
        cin>>a[i].num;
    for(int i=0;i<n;i++)
    {
        ll temp=a[i].num;
        while(temp%3==0)
        {
            a[i].d3++;
            temp/=3;
        }
        while(temp%2==0)
        {
            a[i].d2++;
            temp/=2;
        }
    }
    sort(a,a+n,cmp);
    for(int i=0;i<n;i++)
        cout<<a[i].num<<" ";
    cout<<endl;
	return 0;
}
