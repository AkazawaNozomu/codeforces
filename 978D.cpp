#include<iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;
const int maxn=1e5+5;
int a[maxn];
int main()
{
	std::ios::sync_with_stdio( false );
	cin.tie(0);
	int n,ans,cur=0,d,lst;bool f;
	cin>>n;
	ans=n+1;
	if (n==1||n==2)
	{
		cout<<0<<endl;return 0;
	}
	for (int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for (int i=-1;i<=1;i++)
	{
		for (int j=-1;j<=1;j++)
		{
			d=(a[1]+j)-(a[0]+i);
			cur=(i!=0)+(j!=0);
			lst=a[1]+j;
			f=1;
			for (int k=2;k<n;k++)
			{
				if (a[k]==lst+d)
				{
					lst=a[k];
				}
				else if (a[k]-1==lst+d)
				{
					lst=a[k]-1;++cur;
				}
				else if (a[k]+1==lst+d)
				{
					lst=a[k]+1;++cur;
				}
				else
				{
					f=0;break;
				}
			}
			if (f&&cur<ans)ans=cur;
		}
	}
	if (ans<=n)cout<<ans<<endl;
	else cout<<-1<<endl;
}