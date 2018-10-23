#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn=50+5,maxl=105;
string s;
int a[maxn][maxn],ans=0;
int n,m,ei,ej,si,sj,curi,curj;
string ch;
int dir1[]={1,0,-1,0},dir2[]={0,1,0,-1},cur[4];
int b[24][4]={{0,1,2,3},{0,1,3,2},{0,2,1,3},{0,2,3,1},{0,3,1,2},{0,3,2,1},{1,0,2,3},{1,0,3,2},{1,2,0,3},{1,2,3,0},{1,3,0,2},{1,3,2,0},{2,0,1,3},{2,0,3,1},{2,1,0,3},{2,1,3,0},{2,3,0,1},{2,3,1,0},{3,0,1,2},{3,0,2,1},{3,1,0,2},{3,1,2,0},{3,2,0,1},{3,2,1,0}};
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	cin>>n>>m;
	for(int i=0;i<n;i++)
	{
		cin>>ch;
		for(int j=0;j<m;j++)
		{
			switch(ch[j])
			{
				case 'S':a[i][j]=0;si=i;sj=j;break;
				case 'E':a[i][j]=1;ei=i;ej=j;break;
				case '.':a[i][j]=2;break;
				case '#':a[i][j]=3;break;
			}
		}
	}
	cin>>s;
	for(int i=0;i<24;i++)
	{
		cur[0]=b[i][0];cur[1]=b[i][1];cur[2]=b[i][2];cur[3]=b[i][3];
		bool flag=1;
		curi=si;curj=sj;
		for(unsigned int j=0;j<s.size();j++)
		{
			if(curi+dir1[cur[s[j]-'0']]>=n||curi+dir1[cur[s[j]-'0']]<0||curj+dir2[cur[s[j]-'0']]>=m||curj+dir2[cur[s[j]-'0']]<0)
			{
				flag=0;break;
			}
			curi+=dir1[cur[s[j]-'0']];
			curj+=dir2[cur[s[j]-'0']];
			if(a[curi][curj]==3)
			{
				flag=0;break;
			}
			if(curi==ei&&curj==ej)break;
		}
		if(curi!=ei||curj!=ej)flag=0;
		if(flag)
		{
			ans++;
			/*for(int i=0;i<4;i++)
			{
				cout<<cur[i]<<" ";
			}
			cout<<endl;*/
		}
	}
	cout<<ans<<endl;
	return 0;
}

