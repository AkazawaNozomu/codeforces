#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <algorithm>
#define ll long long
using namespace std;
const int maxn=1005;
int a[maxn];ll pres[maxn];
ll max3(/*ll a,*/ll b,ll c)
{
    //if(a>b&&a>c)return a;
    if(b>c)return b;
    return c;
}
ll min3(/*ll a,*/ll b,ll c)
{
    //if(a<b&&a<c)return a;
    if(b<c)return b;
    return c;
}
int main()
{
	std::ios::sync_with_stdio(false);
	cin.tie(0);
	int n,w,maxa=-1e6-5,mina=1e6+5;
	ll maxp=-1e18,minp=1e18;
	cin>>n>>w;
	for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        pres[i]=a[i]+pres[i-1];
        if(a[i]>maxa)maxa=a[i];
        if(a[i]<mina)mina=a[i];
        if(pres[i]>maxp)maxp=pres[i];
        if(pres[i]<minp)minp=pres[i];
    }
    int ans=min3(w,w-maxp)-max3(0,-minp)+1;
    if(ans<0)ans=0;
    cout<<ans<<endl;
	return 0;
}
