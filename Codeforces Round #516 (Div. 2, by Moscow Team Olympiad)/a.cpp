#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn=1e5+5;
int a[3]; 
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	for(int i=0;i<3;i++)cin>>a[i];
	sort(a,a+3);
	cout<<max(0,a[2]-a[1]-a[0]+1)<<endl;
	return 0;
}

