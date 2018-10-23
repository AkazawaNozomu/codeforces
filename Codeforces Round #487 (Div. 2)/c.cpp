#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn=305;
int ans[maxn][maxn];
struct grid
{
	char a;int b;
}g[4];
bool cmp(grid g1,grid g2)
{
	return g1.b>g2.b;
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	g[0].a='A';
	g[1].a='B';
	g[2].a='C';
	g[3].a='D';
	cin>>g[0].b>>g[1].b>>g[2].b>>g[3].b;
	sort(g,g+4,cmp);
	int m,n;
	if(g[0].b<g[1].b+g[2].b+g[3].b+1)
	{
		m=g[1].b+g[2].b+g[3].b;n=2;
		cout<<m*2<<" "<<n<<endl;
		int lst=m-g[0].b,cur1=0,cur2=0,cur3=0;
		for(int i=0;i<m;i++)
		{
			cout<<g[0].a<<g[0].a<<endl;
			if(lst)
			{
				cout<<g[0].a;
				lst--;
				if(cur1<g[1].b)
				{
					cur1++;
					cout<<g[1].a;
				}
				else if(cur2<g[2].b)
				{
					cur2++;
					cout<<g[2].a;
				}
				else if(cur3<g[3].b)
				{
					cur3++;
					cout<<g[3].a;
				}
			}
			else
			{
				if(cur1<g[1].b)
				{
					cur1++;
					cout<<g[1].a<<g[1].a;
				}
				else if(cur2<g[2].b)
				{
					cur2++;
					cout<<g[2].a<<g[2].a;
				}
				else if(cur3<g[3].b)
				{
					cur3++;
					cout<<g[3].a<<g[3].a;
				}
			}
			cout<<endl;
		}
	}
	else if(g[0].b==g[1].b+g[2].b+g[3].b+1)
	{
		m=g[1].b+g[2].b+g[3].b;n=2;
		cout<<m*2<<" "<<n<<endl;
		int cur1=0,cur2=0,cur3=0;
		for(int i=0;i<m;i++)
		{
			cout<<g[0].a<<g[0].a<<endl;
			if(cur1<g[1].b)
			{
				cur1++;
				cout<<g[1].a<<g[1].a;
			}
			else if(cur2<g[2].b)
			{
				cur2++;
				cout<<g[2].a<<g[2].a;
			}
			else if(cur3<g[3].b)
			{
				cur3++;
				cout<<g[3].a<<g[3].a;
			}
			cout<<endl;
		}
		cout<<g[0].a<<g[0].a<<endl;
	}
	else
	{
		m=50;n=50;
		cout<<m<<n<<endl;
		for(int i=0;i<25;i++)
			for(int j=0;j<25;j++)
				ans[i][j]=g[0].a;
		for(int i=25;i<50;i++)
			for(int j=0;j<25;j++)
				ans[i][j]=g[1].a;
		for(int i=0;i<25;i++)
			for(int j=25;j<50;j++)
				ans[i][j]=g[2].a;
		for(int i=25;i<50;i++)
			for(int j=25;j<50;j++)
				ans[i][j]=g[3].a;
		g[0].b--;g[1].b--;g[2].b--;g[3].b--;
		
		
			for(int j=0;j<25;j+=2)
			{
				for(int k=0;k<25;k+=2)
				{
					while()
				}
			}
		
	}
	return 0;
}

