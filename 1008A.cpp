#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn=1e5+5;
string s; 
bool f=1;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	cin>>s;
	for(int i=0;i<s.size()-1;i++)
	{
		if(s[i]!='a'&&s[i]!='e'&&s[i]!='i'&&s[i]!='o'&&s[i]!='u'&&s[i]!='n')
		{
			if(s[i+1]!='a'&&s[i+1]!='e'&&s[i+1]!='i'&&s[i+1]!='o'&&s[i+1]!='u')
			{
				f=0;break;
			}
		}
	}
	if(s[s.size()-1]!='a'&&s[s.size()-1]!='e'&&s[s.size()-1]!='i'&&s[s.size()-1]!='o'&&s[s.size()-1]!='u'&&s[s.size()-1]!='n')
		f=0;
	if(f)cout<<"yes"<<endl;
	else cout<<"no"<<endl;
	return 0;
}

