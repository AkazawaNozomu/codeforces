#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn=1e5+5;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	ll n,x,y,ans=0;string s;
	cin>>n>>x>>y;cin>>s;
	for(unsigned int i=0;i<s.size()-1;i++)if(s[i]=='0'&&s[i+1]=='1')ans++;	
	if(s[s.size()-1]=='0')ans++;
	if(s.size()==1)ans=s[0]=='0'?1:0;
	ans=min((ans-1)*x+y,ans*y);
	ans=ans>0?ans:0;
	cout<<ans<<endl;
	return 0;
}
