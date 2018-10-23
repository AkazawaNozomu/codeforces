#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn=100+5;
string s; 
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	cin>>s;
	if(s.size()<=2)
	{
		cout<<"No\n";return 0;
	}
	for(int i=0;i<s.size()-2;i++)
	{
		if((s[i]=='A'&&s[i+1]=='B'&&s[i+2]=='C')||(s[i+1]=='A'&&s[i]=='B'&&s[i+2]=='C')||(s[i]=='A'&&s[i+2]=='B'&&s[i+1]=='C')||(s[i+2]=='A'&&s[i]=='B'&&s[i+1]=='C')||(s[i+2]=='A'&&s[i+1]=='B'&&s[i]=='C')||(s[i+1]=='A'&&s[i+2]=='B'&&s[i]=='C'))
		{
			cout<<"Yes\n";return 0;
		}
	}
	cout<<"No\n";
	return 0;
}

