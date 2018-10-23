#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn=2e3+5;
string s;
int a[maxn],b[maxn];
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	int n,p;
	cin>>n>>p;
	cin>>s;
	memset(b,-1,sizeof(b));
	for(int i=0;i<n;i++)
	{
		if(s[i]=='.')a[i]=-1;
		else if(s[i]=='1')a[i]=1;
		else a[i]=0;
		if(b[i%p]==-1&&a[i]>=0)b[i%p]=i;
	}
	//for(int i=0;i<p;i++)
	//cout<<b[i]<<" "; 
	//cout<<endl;
	bool ok=0;
	for(int i=0;i<p;i++)
	{
		if(ok)
		{
			for(int j=i;j<n;j+=p)
				if(a[i]==-1)a[i]=0;
		}
		if(b[i]!=-1)
		{
			int cur=a[b[i]];
			//cout<<b[i]<<" "<<cur<<" "<<ok<<endl;
			for(int j=b[i]-p;j>=0;j-=p)
			{
				if(a[j]!=cur)
				{
					ok=1;
					a[j]=1-cur;
				}
			}
			for(int j=b[i]+p;j<n;j+=p)
			{
				if(a[j]!=cur)
				{
					ok=1;
					a[j]=1-cur;
				}
			}
		}
		else
		{
			if(i+p<n)
			{
				ok=1;
				a[i]=1;
				for(int j=i+p;j<n;j+=p)a[j]=0;
			}
			else a[i]=1;
		}
	}
	if(ok)
	{
		for(int i=0;i<n;i++)cout<<a[i];
		cout<<endl;
	}
	else cout<<"No"<<endl;
	return 0;
}

