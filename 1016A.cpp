#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn=1e5+5;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	int n,m,x;ll sum=0;
	cin>>n>>m;
	for(int i=0;i<n;i++)
	{
		//ans=0;
		cin>>x;
		sum+=x;
		cout<<sum/m<<" ";
		sum%=m;
	}
	return 0;
}

