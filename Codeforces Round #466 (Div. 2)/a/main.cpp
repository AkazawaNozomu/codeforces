#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <iomanip>
#include <algorithm>
using namespace std;
const int maxn=105;
int x[maxn];
int main()
{
    //cout << "Hello world!" << endl;
    int n,d,p1,p2,xd,ans=0;
    cin>>n>>d;
    for(int i=0;i<n;i++)
        cin>>x[i];
    sort(x,x+n);
    xd=x[n-1]-x[0];
    p1=0;p2=n-1;
    while(p1<p2&&xd>d)
    {
        if(x[p2-1]-x[p1]>x[p2]-x[p1+1])
        {
            xd=x[p2]-x[p1+1];p1++;ans++;
            //cout<<p1<<" "<<xd<<1<<endl;
        }
        else if(x[p2-1]-x[p1]<x[p2]-x[p1+1])
        {
            xd=x[p2-1]-x[p1];p2--;ans++;
            //cout<<p2<<" "<<xd<<2<<endl;
        }
        else
        {
            int pp1=p1,pp2=p2;
            while(pp1<pp2)
            {
                if(x[pp2]-x[pp2-1]==x[pp1+1]-x[pp1])
                {
                    pp1++;pp2--;
                }
                else if(x[pp2]-x[pp2-1]<x[pp1+1]-x[pp1])
                {
                    xd=x[p2]-x[p1+1];p1++;ans++;break;
                }
                else
                {
                    xd=x[p2-1]-x[p1];p2--;ans++;break;
                }
            }
            if(pp1>=pp2)
            {
                xd=x[p2]-x[p1+1];p1++;ans++;
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}
