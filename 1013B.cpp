#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn=1e5+5;
int a[maxn];
set<int>s1,s2;
multiset<int>s;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	int n,x;
	cin>>n>>x;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		s1.insert(a[i]);
		s.insert(a[i]);
	}
	if(s1.size()<n)
	{
		cout<<0<<endl;return 0;
	}
	bool f=1;
	for(int i=0;i<n;i++)
	{
		if(((s.count(a[i]&x))&&(a[i]!=(a[i]&x)))||((s.count(a[i]&x)>1)&&(a[i]==(a[i]&x))))
		{
			cout<<1<<endl;f=0;return 0;
		}
		//s2.insert(a[i]);
	}
	for(int i=0;i<n;i++)
	{
		if(s2.count(a[i]&x))
		{
			cout<<2<<endl;f=0;return 0;
		}
		s2.insert(a[i]&x);
	}
	if(f)cout<<-1<<endl;
	return 0;
}

