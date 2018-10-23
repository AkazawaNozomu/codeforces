#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn=1e5+5;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	string s;
	cin>>s;
	s+=s;
	int cur=1,ans=1;
	for(int i=1;i<s.size();i++)
	{
		if(s[i-1]!=s[i])cur++;
		else
		{
			ans=max(ans,cur);
			cur=1;
		}
	}
	ans=max(ans,cur);
	ans=min((int)s.size()/2,ans);
	cout<<ans<<'\n';
	return 0;
}
