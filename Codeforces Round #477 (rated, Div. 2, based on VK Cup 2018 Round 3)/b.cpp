#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <algorithm>
#define ll long long
using namespace std;
const ll maxn=100005;
ll s[maxn];
int main()
{
	std::ios::sync_with_stdio(false);
	cin.tie(0);
	ll n,a,b;ll sum=0;
	cin>>n>>a>>b;
	for(ll i=0;i<n;i++)
    {
        cin>>s[i];
        sum+=s[i];
    }
    if(s[0]*a>=b*sum)
    {
        cout<<0<<endl;return 0;
    }
    //int p=(1+n)/2;
    //int s0=s[0];
    sort(s+1,s+n);
    /*for(int i=0;i<n;i++)
    {
        cout<<s[i];
        //sum+=s[i];
    }*/
    ll pmin=1,pmax=n;
    while(pmin<=pmax)//[pmin,pmax)
    {
        //cout<<pmin<<" "<<pmax<<" ";
        if(pmin==pmax)
        {
            cout<<pmin<<endl;return 0;
        }
        ll p=(pmin+pmax)/2;ll temps=sum;
        //cout<<p<<" ";
        for(ll i=1;i<=p;i++)
        {
            //int temps=
            temps-=s[n-i];
        }
        //cout<<temps<<endl;
        if(s[0]*a>=b*temps)
        {
            pmax=p;
        }
        else
        {
            pmin=p+1;
        }
    }
	return 0;
}
