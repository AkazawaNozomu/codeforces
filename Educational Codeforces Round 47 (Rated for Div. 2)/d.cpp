#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn=1e5+5;
struct st
{
	int a,b;
}t;
vector<st>mp;
//map<int,int>mp;
ll gcd(ll a,ll b)
{
	return b==0?a:gcd(b,a%b);
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	int n,m;
	cin>>n>>m;
	if(m<n-1)
	{
		cout<<"Impossible"<<endl;
		return 0;
	}
	for(int i=1;i<n;i++)
	{
		t.a=i;
		t.b=i+1;
		mp.push_back(t);
	}
	m-=n-1;
	for(int i=1;i<n-1;i++)
	{
		if(m==0)break;
		for(int j=i+2;j<=n;j++)
		{
			if(gcd(j,i)==1)
			{
				t.a=i;
				t.b=j;
				mp.push_back(t);
				//mp.insert(make_pair(i,j));
				m--;
			}
			if(m==0)break;
		}
		if(m==0)break;
	}
	if(m)
	{
		cout<<"Impossible"<<endl;
	}
	else
	{
		cout<<"Possible"<<endl;
		for(auto it=mp.begin();it!=mp.end();it++)
		{
			cout<<it->a<<" "<<it->b<<endl;
		}
	}
	return 0;
}

