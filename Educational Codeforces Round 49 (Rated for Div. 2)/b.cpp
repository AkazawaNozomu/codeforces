#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn=1e5+5;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
    ll n,q,x,y,ans;
    cin>>n>>q;
    while(q--)
    {
        cin>>x>>y;
        ans=((x+y)%2)*((n*n+1)/2);
        ans+=((x-1)/2)*n;
        if(n%2)
            if(x%2)ans+=(y+1)/2;
            else ans+=(n+1)/2+y/2;
        else ans+=(x/2-(x-1)/2)*n/2+(y+1)/2;
        cout<<ans<<endl;
    }
	return 0;
}
