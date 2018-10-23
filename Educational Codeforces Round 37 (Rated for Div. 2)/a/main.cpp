#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <algorithm>
using namespace std;
const int maxn=205;
int main()
{
    //cout << "Hello world!" << endl;
    int t;
    cin>>t;
    int n,k,x,lastx;
    while(t--)
    {
        cin>>n>>k;
        cin>>x;
        int maxx=(x-1)*2;
        lastx=x;
        for(int i=1;i<k;i++)
        {
            cin>>x;
            maxx=max(maxx,x-lastx);
            lastx=x;
            //cout<<x<<" "<<lastx<<endl;
        }
        maxx=max(maxx,2*(n-x));
        //cout<<maxx<<endl;
        int ans=(maxx)/2+1;
        cout<<ans<<endl;
    }
    return 0;
}
