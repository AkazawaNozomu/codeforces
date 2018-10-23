#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn=1e5+5;
int n,a[maxn],lst;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	cin>>n;
	for(int i=0;i<n;i++)cin>>a[i];
	sort(a,a+n);
	//cur=a[0];curb=1;lstb=0;
	lst=0;
	int ans=0;
	for(int i=1;i<n;i++)
	{
		if(a[i]>a[lst])
		{
			lst++;
			ans++;
		}
	}
	cout<<ans<<endl;
	return 0;
}

