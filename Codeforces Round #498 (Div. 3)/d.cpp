#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn=1e5+5;
string a,b;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	int n,ans=0;
	cin>>n;
	cin>>a>>b;
	for(int i=0;i*2<n;i++)
	{
		char c1=a[i],c2=b[i],c3=a[n-i-1],c4=b[n-i-1];
		if((c1==c2&&c3==c4)||(c1==c3&&c2==c4)||(c1==c4&&c3==c2));
		else if(c1==c2||c3==c4/*||c1==c3*/||c2==c4||c1==c4||c3==c2)ans++;
		else ans+=2;
	}
	if(n%2&&a[n/2]!=b[n/2])ans++;
	cout<<ans<<endl;
	return 0;
}

