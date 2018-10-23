#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn=3e3+5;
//ll p[maxn],c[maxn];
vector<ll>sup[maxn];//supporters
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
  int n,m,p;ll c;
  cin>>n>>m;
  for(int i=1;i<=n;i++)
  {
    cin>>p>>c;
    sup[p].push_back(c);
  }
  for(int i=1;i<=m;i++)
  {
    sort(sup[i].begin(),sup[i].end(),greater<ll>());
  }
  ll maxs=sup[1].size()-1;
  //cout<<maxs<<endl;
  for(int i=2;i<=m;i++)
  {
    maxs=max(maxs,(ll)sup[i].size());
  }
  if(maxs<sup[1].size())
  {
    cout<<0<<endl;
    return 0;
  }
  ll ans=0,minc=/*(1ll<<60)-1*/1e17+7;//mincost
  for(int i=maxs+1;i>=1;i--)
  {
    priority_queue<ll,vector<ll>,greater<ll> >pq;
    for(int j=2;j<=m;j++)
    {
      if(sup[j].size()>=i)
      {
        ans+=sup[j][sup[j].size()-1];
        //cout<<sup[j][sup[j].size()-1]<<endl;
        sup[j].pop_back();
        sup[1].push_back(1);
      }
      for(int k=0;k<sup[j].size();k++)
        pq.push(sup[j][k]);
    }
    ll aa=ans;
    ll tt=sup[1].size();
    while((!pq.empty())&&tt<i)
    {
      tt++;
      aa+=pq.top();
			pq.pop();
    }
    minc=min(minc, aa);
  }
  cout<<minc<<endl;
	return 0;
}
