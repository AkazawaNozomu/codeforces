#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn=2e3+5;
struct problem
{
	int id;
	int t;
}a[maxn];
int b[maxn];
bool cmp(problem p1,problem p2)
{
	return p1.t>p2.t;
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	int n,k,ans=0;
	cin>>n>>k;
	for(int i=0;i<n;i++)
	{
		cin>>a[i].t;
		a[i].id=i;
	}
	sort(a,a+n,cmp);
	b[0]=0;
	for(int i=0;i<k;i++)
	{
		b[i+1]=a[i].id+1;
		ans+=a[i].t;
		//cout<<b[i+1]<<endl;
	}
	sort(b+1,b+k+1);
	//cout<<b[0]<<b[1]<<endl;
	cout<<ans<<endl;
	for(int i=1;i<k;i++)
	{
		cout<<b[i]-b[i-1]<<" ";
	}
	cout<<n-b[k-1]<<endl;
	return 0;
}

