#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn=1e5+5;
int a[maxn]; 
priority_queue<int,vector<int>,greater<int> >ans;
/*int gcd(int a,int b)
{
	return b==0?a:a%b;
}*/
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	int n,k;
	cin>>n>>k;
	int cur=k;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		cur=__gcd(max(cur,a[i]),min(cur,a[i]));
	}
	cout<<k/cur<<endl;
	for(int i=1;i<=k/cur;i++)
	{
		ans.push((i*cur)%k);
	}
	for(int i=1;i<=k/cur;i++)
	{
		cout<<ans.top()<<" ";
		ans.pop();
	}
	return 0;
}

