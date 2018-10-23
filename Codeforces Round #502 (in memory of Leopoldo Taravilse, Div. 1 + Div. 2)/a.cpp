#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn=1e3+5;
struct stu
{
	int id,a,b,c,d,sum;
}s[maxn];
bool cmp(stu s1,stu s2)
{
	if(s1.sum==s2.sum)return s1.id<s2.id;
	else return s1.sum>s2.sum;
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		s[i].id=i+1;
		cin>>s[i].a>>s[i].b>>s[i].c>>s[i].d;
		s[i].sum=s[i].a+s[i].b+s[i].c+s[i].d;
	}
	sort(s,s+n,cmp);
	for(int i=0;i<n;i++)
	{
		if(s[i].id==1)
		{
			cout<<i+1<<endl;return 0;
		}
	}
	return 0;
}

