#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <algorithm>
#define ll long long
using namespace std;
const int maxn=200005;
/*struct letter
{
    int id,num;
}l[maxn];*/
ll a[maxn],pres[maxn];
int main()
{
	std::ios::sync_with_stdio(false);
	cin.tie(0);
	ll n,m,x;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        pres[i]=a[i]+pres[i-1];
    }
    int cur=1;
    for(int i=1;i<=m;i++)
    {
        cin>>x;
        while(x>pres[cur])cur++;
        cout<<cur<<" "<<x-pres[cur-1]<<endl;
    }
	return 0;
}
