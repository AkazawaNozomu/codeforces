#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn=1e5+5;
/*ll a[maxn];
bool isp[maxn];*/
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
  int n;
  cin>>n;
  if(n%4!=0)
  {
    cout<<"! -1\n";
    return 0;
  }
  int l=1,r=1+n/2,x,y,cur;
	cout<<"? "<<1<<endl;
	cin>>x;
	cout<<"? "<<1+n/2<<endl;
	cin>>y;
	if(x==y)
	{
		cout<<"! "<<1<<endl;
		return 0;
	}
	bool f=(x<y);
  while(1)
  {
		cur=(l+r)/2;
		cout<<"? "<<cur<<endl;
    cin>>x;
    cout<<"? "<<cur+n/2<<endl;
    cin>>y;
		if(x==y)
		{
			cout<<"! "<<cur<<endl;
			return 0;
		}
    if((x<y)==f)l=cur;
		else r=cur;
  }
	return 0;
}
