#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn=1e5+5;
int t[maxn],l[maxn];
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	int n,L,a,ans=0;
	cin>>n>>L>>a;
	for(int i=1;i<=n;i++)
	{
		cin>>t[i]>>l[i];
		l[i]+=t[i];
		ans+=(t[i]-l[i-1])/a;
	}
	ans+=(L-l[n])/a;
	cout<<ans<<endl;
	return 0;
}

