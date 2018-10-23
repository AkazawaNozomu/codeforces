#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn=1e3+5;
ll a[maxn],b[maxn];
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	ll m,n;
	cin>>n>>m;
	for(int i=0;i<n;i++)cin>>a[i];
	for(int i=0;i<n;i++)cin>>b[i];
	b[n]=b[0];
	long double l=0,r=1e9,mid,curw;
	for(int j=0;j<10;j++)
	{
		mid=(l+r)/2;
		curw=mid+(long double)m;
		for(int i=0;i<n;i++)
		{
			curw-=curw/(long double)a[i];
			//curw=mid+(long double)m;
			curw-=curw/(long double)b[i+1];
			//curw=mid+(long double)m;
			if(curw<m)break;
			cout<<fixed<<setprecision(9)<<curw<<endl;
		}
		if(curw<m)r=mid;
		else l=mid;
		cout<<fixed<<setprecision(9)<<l<<r<<endl;
	}
	cout<<fixed<<setprecision(9)<<l;
	return 0;
}

