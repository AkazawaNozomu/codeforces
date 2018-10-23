#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn=3e5+5;
string s[maxn];
int lef[maxn],rig[maxn];
map<pair<int,int>,int>m;//<lef,rig>,num
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>s[i];
		//int lef=0,rig=0;
		for(unsigned int j=0;j<s[i].size();j++)
		{
			if(s[i][j]=='(')lef[i]++;
			else if(s[i][j]==')')lef[i]--;
		}
		for(unsigned int j=s[i].size()-1;j>=0;j--)
		{
			if(s[i][j]=='(')rig[i]++;
			else if(s[i][j]==')')rig[i]--;
		}
		if(m.count(make_pair(lef[i],rig[i])))
		{
			
	} 
		m[make_pair(lef[i],rig[i])]++;
	}
	ll ans=0;
	for(int i=0;i<n;i++)
	{
		if(m.count(make_pair(rig[i],lef[i])))
		ans+=m[make_pair(rig[i],lef[i])];
	}
	cout<<ans<<endl;
	return 0;
}

