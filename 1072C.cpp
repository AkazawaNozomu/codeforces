#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
typedef long long ll;
const int maxn=1e5+5;
int vis[maxn];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    ll a,b;
    cin>>a>>b;
    ll sum=a+b,l=0,r=sum,anum=0,bnum=0;
    while(l+1<r)
    {
        ll mid=(l+r)/2;
        if(mid*(mid+1)/2<=sum)l=mid;
        else r=mid;
    }
    if((l+1)*(l+2)/2<=sum)l++;
    for(int i=l;i>0;i--)
    {
        if(!a)break;
        if(a<i)i=a;
        if(a==i&&(!vis[i]))
        {
            vis[i]=1;
            anum++;break;
        }
        else if(a-i<i)
        {
            vis[a-i]=vis[i]=1;
            anum+=2;break;
        }
        else if(!vis[i])
        {
            vis[i]=1;
            a-=i;
            anum++;
        }
        else break;
    }
    bnum=l-anum;
    cout<<anum<<endl;
    for(int i=1;i<=l;i++)
    {
        if(vis[i])
        {
            cout<<i<<" ";
        }
    }
    cout<<endl;
    cout<<bnum<<endl;
    for(int i=1;i<=l;i++)
    {
        if(!vis[i])
        {
            cout<<i<<" ";
        }
    }
    cout<<endl;
    return 0;
}
