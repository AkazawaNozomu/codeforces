#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn=1e5+5;
const string s1="black",s2="white";
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	int n;
	string s,s0;
	cin>>n;
	int l=1,r=1e9;
	bool lst;
	cout<<"0 0"<<endl;
	cin>>s0;
	for(int i=1;i<n;i++)
	{
		int mid=(l+r)/2;
		cout<<mid<<" "<<mid<<endl;
		cin>>s;
		if(s==s0)l=mid;
		else r=mid;
	}
	cout<<l<<" "<<r<<" "<<r<<" "<<l<<endl;
	return 0;
}

