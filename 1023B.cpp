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
    if(k<=2||k>=2*n)
    {
        cout<<0<<endl;;return 0;
    }
    cout<<min((k-1)/2,n-k/2)<<endl;
	return 0;
}
