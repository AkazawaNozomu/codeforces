#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <iomanip>
#include <algorithm>
using namespace std;
//const int maxn=;
int main()
{
    int n,k,a,b;long long ans=0;bool flag=0;
    cin>>n>>k>>a>>b;
    while(n!=1)
    {
        if(k==1||k>n)
        {
            ans+=(n-1)*a;n=1;break;
        }
        else if(flag)
        {
            ans+=(n-1)*a;n=1;break;
        }
        else if(n%k!=0)
        {
            n--;ans+=a;
        }
        else if(n%k==0)
        {
            if(n/k*a<=b)
            {
                flag=1;ans+=a;n--;
            }
            else
            {
                ans+=b;n/=k;
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}
