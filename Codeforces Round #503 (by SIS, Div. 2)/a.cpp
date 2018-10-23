#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn=1e5+5;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
  int n,h,a,b,k,ta,tb,fa,fb,ans;
  cin>>n>>h>>a>>b>>k;
  while(k--)
  {
    cin>>ta>>fa>>tb>>fb;
    if(ta==tb)ans=abs(fa-fb);
    else
    {
      if(fa>b&&fb>b)
      {
        ans=abs(ta-tb)+(fa-b)+(fb-b);
      }
      else if(fa<a&&fb<a)
      {
        ans=abs(ta-tb)+(a-fa)+(a-fb);
      }
      else
      {
        ans=abs(ta-tb)+abs(fa-fb);
      }
    }
    cout<<ans<<endl;
  }
	return 0;
}
