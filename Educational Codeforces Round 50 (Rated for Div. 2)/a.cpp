#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn=1e5+5;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	ll n,k;
    cin>>n>>k;
    cout<<k/n+(k%n?1:0)<<endl;
	return 0;
}
