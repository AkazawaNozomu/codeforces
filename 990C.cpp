#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn=3e5+5;
string s[maxn];
ll lef[maxn],rig[maxn];
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>s[i];
		if((s[i][0]==')')&&(s[i][s[i].size()-1]=='('))continue;
		int tl=0,tr=0;
		bool f=0;
		for(int j=0;j<s[i].size();j++)
		{
			if(s[i][j]=='(')
			{
				tl++;
			}
			else if(s[i][j]==')')
			{
				if(tl)tl--;
				else
				{
					f=1;break;
				}
			}
		}
		if(!f)
			lef[tl]++;
		f=0;
		for(int j=s[i].size()-1;j>=0;j--)
		{
			if(s[i][j]==')')
			{
				tr++;
			}
			else if(s[i][j]=='(')
			{
				if(tr)tr--;
				else
				{
					f=1;break;
				}
			}
		}
		if(!f)
			rig[tr]++;
	}
	ll ans=0;
	for(int i=0;i<maxn;i++)
		ans+=lef[i]*rig[i];
	cout<<ans<<endl;
	return 0;
}

