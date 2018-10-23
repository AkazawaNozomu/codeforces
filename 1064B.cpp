#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn=1e5+5;
int a[35];
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	a[0]=1;
	for(int i=1;i<=30;i++)a[i]=a[i-1]*2;
	int t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		int ans=1;
		for(int i=0;i<=30;i++)
		{
			if((1<<i)&n)
			{
				ans*=2;
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}

