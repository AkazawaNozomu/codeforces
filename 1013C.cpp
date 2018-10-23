#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn=2e5+5;
//ll a[maxn]/*,dif[maxn]*/;
struct point
{
	ll id;
	ll a;
	ll pre;
}p[maxn];
bool cmp1(point p1,point p2)
{
	if(p1.a==p2.a)return p1.id<p2.id;
	else return p1.a<p2.a;
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	ll n,ans=0;
	cin>>n;
	for(int i=0;i<2*n;i++)
	{
		cin>>p[i].a;
		p[i].id=i;
	}
	sort(p,p+2*n,cmp1);
	ans=(p[n-1].a-p[0].a)*(p[2*n-1].a-p[n].a);
	//ll ans=(a[n-1]-a[0])*(a[2*n-1]-a[n]);
	for(int i=1;i<n;i++)
	{
		ans=min(ans,(p[2*n-1].a-p[0].a)*(p[i+n-1].a-p[i].a));
	}
	cout<<ans<<endl;
	return 0;
}

