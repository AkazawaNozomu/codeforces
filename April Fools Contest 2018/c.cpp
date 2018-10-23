#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn=1e5+5;
int a[maxn],b[maxn];
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
  int n;
  cin>>n;
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
    b[i]=a[i];
    if(i&&abs(a[i]-a[i-1])>=2)
    {
      cout<<"NO\n";
      return 0;
    }
  }
  for(int i=0;i<n;i++)
  {
    int maxi=0;
    for(int j=0;j<n;j++)
    {
      if(a[j]>a[maxi])maxi=j;
    }
    b[maxi]=0;
    int cur=b[0];
    for(int j=0;j<n;j++)
    {
      if(!cur)
      {
        cur=b[j];continue;
      }
      if(!b[j])continue;
      else if(abs(b[j]-cur)>=2)
      {
        cout<<"NO\n";
        return 0;
      }
      cur=b[j];
    }
  }
  sort(a,a+n);
  for(int i=0;i<n;i++)
  {
    if(i&&abs(a[i]-a[i-1])>=2)
    {
      cout<<"NO\n";
      return 0;
    }
  }
  cout<<"YES\n";
	return 0;
}
