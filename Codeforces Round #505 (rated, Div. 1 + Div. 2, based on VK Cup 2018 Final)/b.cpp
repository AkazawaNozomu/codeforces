#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn=3e5+5;
set<int>s;
ll a[maxn],b[maxn],c[maxn];
ll lca(ll x,ll y)
{
    return x*y/__gcd(x,y);
}
void split(ll n)
{
    for(int i=2;i*i<n;i++)
    {
        while(n!=i)
        {
            if(n%i==0)
            {
                n/=i;
                s.insert(i);
            }
            else break;
        }
    }
    if(n==1)return;
    if(n==4)s.insert(2);
    else s.insert(n);
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
    ll n,ans=-1;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i]>>b[i];
        //c[i]=lca(a[i],b[i]);
    }
    split(a[0]);
    split(b[0]);
    /*ll cur=c[0];
    for(int i=1;i<n;i++)
    {
        cur=__gcd(cur,c[i]);
    }
    split(cur);*/
    for(auto i=s.begin();i!=s.end();i++)
    {
        bool f=1;
        for(int j=1;j<n;j++)
        {
            if(a[j]%(*i)==0||b[j]%(*i)==0);
            else
            {
                f=0;break;
            }
        }
        if(f)
        {
            ans=(*i);
            break;
        }
    }
    cout<<ans<<endl;
	return 0;
}
