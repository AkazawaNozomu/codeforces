#include <iostream>
#include <cstdlib>
#include <cstring>
#include <cstdio>
#include <cmath>
#include <algorithm>
using namespace std;
const int maxmn=55;
long long a[maxmn],b[maxmn];long long ans;
//const int llinf=1e9+1;
int cmp( const void *a , const void *b )
{
return *(long long *)a - *(long long *)b;
}
int main()
{
    //cout << "Hello world!" << endl;
    //long long ans1,ans2;//a1>0
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<m;i++)
        cin>>b[i];
    qsort(a,n,sizeof(a[0]),cmp);
    qsort(b,m,sizeof(b[0]),cmp);
    if(b[0]*a[0]>b[m-1]*a[n-1])
        ans=max(b[m-1]*a[n-1],b[0]*a[1]);
    else if(b[0]*a[0]<b[m-1]*a[n-1])
        ans=max(b[m-1]*a[n-2],b[0]*a[0]);
    else
        ans=b[0]*a[0];
    cout<<ans<<endl;
    return 0;
}
