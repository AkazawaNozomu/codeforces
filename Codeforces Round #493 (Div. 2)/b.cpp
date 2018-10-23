#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn=1e2+5;
int a[maxn],preo=0/*[maxn]*/,pree=0/*[maxn]*/,ok[maxn];
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	int p=0,n,b;
	cin>>n>>b;
	cin>>a[0];
	for(int i=1;i<n;i++)
	{
		cin>>a[i];
		if(a[i-1]%2)preo++;
		else pree++;
		if(preo==pree)ok[p++]=max(a[i],a[i-1])-min(a[i],a[i-1]);
	}
	sort(ok,ok+p);
	int ans=0;
	for(int i=0;i<p;i++)
	{
		b-=ok[i];
		if(b>=0)ans++;
		else break;
	}
	cout<<ans<<endl;
	return 0;
}

