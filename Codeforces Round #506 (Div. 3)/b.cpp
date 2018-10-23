#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn=2e5+5;
ll a[maxn];
int n;
int rua(void)
{
    int ans=1,cur=1;
    for(int i=1;i<n;i++)
    {
        if(a[i]>a[i-1]*2)
        {
            ans=max(ans,cur);
            cur=1;
        }
        else cur++;
    }
    ans=max(ans,cur);
    return ans;
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    /*int l=0,r=n+1;
    while(l<r-1)
    {
        int mid=(l+r)/2;
        if(!check(mid))r=mid;
        else l=mid;
    }*/
    cout<<rua()<<endl;
	return 0;
}
