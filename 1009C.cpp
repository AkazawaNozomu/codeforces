#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll maxn=1e5+5;
ll x[maxn],d[maxn];
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	long double m,sum=0;ll n;
	cin>>n>>m;
	for(ll i=0;i<m;i++)
	{
		cin>>x[i]>>d[i];
		sum+=x[i]*n;
		if(d[i]>0)
		{
			ll t=(n-1)*n/2;
			sum+=d[i]*t;
		}
		else if(d[i]<0)
		{
			ll t;
			if(n%2)
			{
				t=(n-1)/2;
				t=t*(t+1);
			}
			else
			{
				t=n/2-1;
				t=t*(t+1)+t+1;
			}
			sum+=d[i]*t;
		}
	}
	long double ans = sum/n;
	cout<<fixed<<setprecision(10)<<ans<<endl;
	return 0;
}

