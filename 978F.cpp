#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <algorithm>
#define ll long long
using namespace std;
const int maxn=200005;
struct pro
{
    int id,r,q;
}p[maxn];
int rk[maxn],ans[maxn];
bool cmp(pro p1,pro p2)
{
    return p1.r<p2.r;
}
int main()
{
	std::ios::sync_with_stdio(false);
	cin.tie(0);
	int n,k;
	cin>>n>>k;
	for(int i=1;i<=n;i++)
    {
        p[i].id=i;
        cin>>p[i].r;
    }
    sort(p+1,p+n+1,cmp);
    for(int i=1;i<=n;i++)
    {
        rk[p[i].id]=i;
    }
    for(int i=2;i<=n;i++)
    {
        if(p[i].r==p[i-1].r)
            p[i].q+=p[i-1].q+1;
    }
    for(int i=0;i<k;i++)
    {
        int x1,x2;
        cin>>x1>>x2;
        if(p[rk[x1]].r>p[rk[x2]].r)
        {
            p[rk[x1]].q++;
        }
        else if(p[rk[x1]].r<p[rk[x2]].r)
        {
            p[rk[x2]].q++;
        }
    }
    for(int i=1;i<=n;i++)
    {
        cout<<rk[i]-p[rk[i]].q-1<<" ";
    }
	return 0;
}
