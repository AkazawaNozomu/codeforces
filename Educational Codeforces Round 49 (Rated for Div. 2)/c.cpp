#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn=1e6+5,maxa=1e4+5;
bool vis[maxa];
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int n,a;
        vector<ll>v;
        memset(vis,0,sizeof(vis));
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>a;
            if(vis[a])
            {
                vis[a]=0;
                v.push_back(a);
            }
            else
            {
                vis[a]=1;
            }
        }
        sort(v.begin(),v.end());
        long double ans=(1ll<<60)-1;ll ansi=0;
        for(int i=1;i<v.size();i++)
        {
            long double p=v[i-1]*2+v[i]*2,s=v[i-1]*v[i];
            //cout<<ans<<endl;
            //cout<<i<<" "<<p*p/s<<endl;
            if(p*p/s<ans)
            {
                ans=p*p/s;
                ansi=i;
            }
        }
        cout<<v[ansi-1]<<" "<<v[ansi-1]<<" "<<v[ansi]<<" "<<v[ansi]<<endl;
    }
	return 0;
}
