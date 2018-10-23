#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn=1e5+5;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	int n,k;
	string s;
	cin>>n>>k>>s;
	sort(s.begin(),s.end());
	char cur=s[0];
	int maxl=1,ans=s[0]-'a'+1;
	for(int i=1;i<n;i++)
	{
		if(maxl==k)break;
		if(s[i]-cur>1)
		{
			maxl++;
			ans+=s[i]-'a'+1;
			cur=s[i];
			//cout<<s[i]<<s[i]-'a';
		}
	}
	if(maxl<k)ans=-1;
	cout<<ans<<endl;
	return 0;
}

