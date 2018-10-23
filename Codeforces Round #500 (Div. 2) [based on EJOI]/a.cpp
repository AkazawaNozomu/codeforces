#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn=1e5+5;
ll x[maxn],y[maxn];
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	int n;ll sum1=0,sum2=0;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>x[i];
		sum1+=x[i];
	}
	for(int i=0;i<n;i++)
	{
		cin>>y[i];
		sum2+=y[i];
	}
	if(sum1>=sum2)cout<<"Yes\n";
	else cout<<"No\n";
	return 0;
}

