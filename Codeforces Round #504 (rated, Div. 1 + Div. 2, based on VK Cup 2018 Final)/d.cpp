#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn=1e5+5;
int a[maxn],li[maxn],ri[maxn];
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
    int n,q,l=0,r=0/*,cur=1*/;
    cin>>n>>q;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        if(!li[a[i]])li[a[i]]=i;
        ri[a[i]]=i;
        if((!l)&&a[i])l=i;
        if(a[i])r=i;
    }
    if(!l)
    {
        cout<<"YES\n";
        for(int i=0;i<n;i++)cout<<"1 ";
    }

	return 0;
}
