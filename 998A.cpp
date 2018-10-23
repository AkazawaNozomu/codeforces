#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
//const int maxn=1e5+5;
int a[10];
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	int n,s=0;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];s+=a[i];
	}
	if(n==1)
	{
		cout<<-1<<endl;return 0;
	}
	if(n==2&&a[0]==a[1])
	{
		cout<<-1<<endl;return 0;
	}
	int maxi=0;
	for(int i=0;i<n;i++)
		if(a[i]>a[maxi])maxi=i;
	if(a[maxi]*2==s)
	{
		if(maxi==0)cout<<2<<endl<<1<<" "<<2<<endl;
		else cout<<2<<endl<<1<<" "<<maxi+1<<endl;
	}
	else cout<<1<<endl<<maxi+1<<endl;
	return 0;
}

