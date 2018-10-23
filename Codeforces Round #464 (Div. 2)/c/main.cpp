#include <iostream>
#include <cstdlib>
#include <cstring>
#include <cstdio>
#include <cmath>
#include <algorithm>
using namespace std;
const int maxn=100005;
int a[maxn];
long long pref[maxn],suf[maxn];
int main()
{
    //cout << "Hello world!" << endl;
    int n,s,f;long long sum=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        pref[i]=a[i-1]+pref[i-1];
        sum+=a[i];
    }
    suf[n]=0;
    for(int i=n-1;i>0;i--)
    {
        suf[i]=suf[i+1]+a[i+1];
    }
    cin>>s>>f;
    long long minsum,isum;int ans=0;
    minsum=pref[s]+suf[f-1];
    for(int i=1;i<n;i++)
    {
        if(i+1<=s||i+2>=f)
        {
            isum=pref[(n-i+s+1)%n]+suf[(n-i+f)%n];
        }
        else
        {
            isum=sum-pref[(n-i+f+1)%n]-suf[(n-i+s)%n];
        }
        if(isum<minsum)
        {
            ans=i;
            minsum=isum;
        }
    }
    cout<<ans<<endl;
    return 0;
}
