#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
typedef long long ll;
const int maxn=1e5+5;
int a[maxn],b[maxn],t[maxn];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int n;
    cin>>n;
    for(int i=0;i<n-1;i++)cin>>a[i];
    for(int i=0;i<n-1;i++)cin>>b[i];
    for(int i=0;i<4;i++)
    {
        bool f=1;
        memset(t,-1,sizeof(t));
        t[0]=i;
        for(int j=1;j<n;j++)
        {
            for(int k=0;k<4;k++)
            {
                if(((k|t[j-1])==a[j-1])&&((k&t[j-1])==b[j-1]))
                    t[j]=k;
            }
            if(t[j]==-1)
            {
                f=0;break;
            }
        }
        if(f)break;
    }
    for(int i=0;i<n;i++)
    {
        if(t[i]==-1)
        {
            cout<<"NO\n";
            return 0;
        }
    }
    cout<<"YES\n";
    for(int i=0;i<n;i++)
    {
        cout<<t[i]<<" ";
    }
    return 0;
}
