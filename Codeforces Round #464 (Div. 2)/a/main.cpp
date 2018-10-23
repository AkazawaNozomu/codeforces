#include <iostream>
#include <cstdlib>
#include <cstring>
#include <cstdio>
#include <cmath>
#include <algorithm>
using namespace std;
const int maxn=5005;
int f[maxn];
int main()
{
    //cout << "Hello world!" << endl;
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>f[i];
    bool ist=0;
    for(int i=1;i<=n;i++)
    {
        if(f[f[f[i]]]==i)
        {
            ist=1;break;
        }
    }
    if(ist)
        cout<<"YES"<<endl;
    else
        cout<<"no"<<endl;
    return 0;
}
