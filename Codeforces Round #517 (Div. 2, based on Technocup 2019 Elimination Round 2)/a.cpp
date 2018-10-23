#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
typedef long long ll;
const int maxn=1e5+5;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int n,m,k;
    cin>>n>>m>>k;
    int ans=0;;
    for(int i=0;i<k;i++)
    {
        ans+=m*2+n*2-4;
        m-=4;
        n-=4;
    }
    cout<<ans<<endl;
    return 0;
}
