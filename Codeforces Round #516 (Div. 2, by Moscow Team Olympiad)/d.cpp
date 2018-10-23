#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
const int maxn=2e3+5;
int n,m,r,c,x,y,vis[maxn][maxn],ans=1;
string s;
deque<pair<pii,pii>>deq;
void bfs()
{
	vis[r][c]=1;
	if(!vis[r+1][c])deq.push_front(make_pair(make_pair(r+1,c),make_pair(0,0)));
	if(!vis[r-1][c])deq.push_front(make_pair(make_pair(r-1,c),make_pair(0,0)));
	if(!vis[r][c+1])deq.push_back(make_pair(make_pair(r,c+1),make_pair(0,1)));
	if(!vis[r][c-1])deq.push_back(make_pair(make_pair(r,c-1),make_pair(1,0)));
	while(!deq.size())
	{
		int curr,curc,curx,cury;
		curr=deq.front().first.first;
		curc=deq.front().first.second;
		curx=deq.front().second.first;
		cury=deq.front().second.second;
		deq.pop_front();
		if(vis[curr+1][curc]==1)continue;
		ans++;
		if(!vis[curr+1][curc])deq.push_front(make_pair(make_pair(curr+1,curc),make_pair(curx,cury)));
		if(!vis[curr-1][curc])deq.push_front(make_pair(make_pair(curr-1,curc),make_pair(curx,cury)));
		if(!vis[curr][curc+1])deq.push_back(make_pair(make_pair(curr,curc+1),make_pair(curx,cury+1)));
		if(!vis[curr][curc-1])deq.push_back(make_pair(make_pair(curr,curc-1),make_pair(curx+1,cury)));
	}
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	cin>>n>>m>>r>>c>>x>>y;
	for(int i=1;i<=n;i++)
	{
		cin>>s;
		for(int j=1;j<=m;j++)
		{
			if(s[j-1]=='.')vis[i][j]=0;
			else if(s[j-1]=='*')vis[i][j]=2;
		}
	}
	bfs();
	cout<<ans<<endl;
	return 0;
}

