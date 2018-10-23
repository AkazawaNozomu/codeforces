#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn=1e5+5;
string a,b;
ll cnt1=0,cnt2=0,cnt3=0,cnt4=0,ans=0;//1:1/1 2:0/1 3:1/0 4:0/0
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	int n;
	cin>>n;
	cin>>a>>b;
	for(int i=0;i<n;i++)
	{
		if(a[i]-'0'==1&&b[i]-'0'==1)cnt1++;
		if(a[i]-'0'==0&&b[i]-'0'==1)cnt2++;
		if(a[i]-'0'==1&&b[i]-'0'==0)cnt3++;
		if(a[i]-'0'==0&&b[i]-'0'==0)cnt4++;
	}
	ans=cnt2*cnt3+cnt1*cnt4+cnt3*cnt4;
	cout<<ans<<endl;
	return 0;
}

