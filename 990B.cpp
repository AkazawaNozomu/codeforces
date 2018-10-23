#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn=2e5+5,maxa=1e6+5;
int a[maxn],num[maxa];
set<int>b;
set<int>::iterator it;
set<int>::iterator it1;
set<int>::iterator it2;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	int n,k;
	cin>>n>>k;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		num[a[i]]++;
		b.insert(a[i]);
	}
	sort(a,a+n);
	int ans=n;
	it1=b.begin();
	it2=b.end();
	it2--;
	for(it=it1;it!=it2;it++)
	{
		//cout<<*it<<" "<<num[*it]<<endl; 
		set<int>::iterator p=++it;--it;
		//cout<<*it<<*p<<endl;
		int t1=(*it),t2=(*p);
		if(t1+k>=t2)ans-=num[t1];
	}
	cout<<ans<<endl;
	return 0;
}

