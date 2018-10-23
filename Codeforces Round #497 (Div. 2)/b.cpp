#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn=1e5+5;
int a[maxn],b[maxn],ans[maxn],f=1;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	int n;
	cin>>n;
	for(int i=0;i<n;i++)cin>>a[i]>>b[i];
	ans[0]=max(a[0],b[0]);
	for(int i=1;i<n;i++)
	{
		int cura=max(a[i],b[i]),curb=min(a[i],b[i]);
		if(cura<=ans[i-1])ans[i]=cura;
		else if(curb<=ans[i-1])ans[i]=curb;
		else {f=0;break;}
	}
	if(f)cout<<"yes"<<endl;
	else cout<<"no"<<endl;
	return 0;
}

