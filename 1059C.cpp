#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn=1e6+5;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	int n;
	cin>>n;
	int tmp=n,cur=1;
	while(tmp/2>1)
	{
		for(int i=0;i*2<tmp;i++)cout<<cur<<" ";
		cur*=2;
		tmp/=2;
	}
	if(tmp==3)cout<<cur<<" "<<cur<<" "<<cur*3;
	else if(tmp==2)cout<<cur<<" "<<cur*2;
	else if(tmp==1)cout<<1;
	return 0;
}

