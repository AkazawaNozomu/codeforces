#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn=1e3+5;
int p[maxn];
bool vis[maxn];
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
  int n;
  cin>>n;
  for(int i=1;i<=n;i++)
  {
    cin>>p[i];
  }
  for(int i=1;i<=n;i++)
  {
    int cur=i;
    memset(vis,0,sizeof(vis));
    while(!vis[cur])
    {
      vis[cur]=1;
      cur=p[cur];
      //cout<<cur<<vis[cur]<<endl;
    }
    cout<<cur<<" ";
  }
	return 0;
}
