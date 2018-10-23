#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn=1e5+5;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
  string s;
  for(int i=0;i<10;i++)
  {
    cout<<i<<endl;
    cin>>s;
    if(s=="great!"||s=="cool"||s=="not bad"||s=="don't think so"||s=="don't touch me")
    {
      cout<<"normal\n";return 0;
    }
    else if(s=="no")
    {
      continue;
    }
    else
    {
      cout<<"grumpy\n";return 0;
    }
  }
	return 0;
}
