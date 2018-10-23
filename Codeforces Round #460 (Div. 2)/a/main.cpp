#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <iomanip>
using namespace std;
const int maxn=5005;
double ans[5005];
int main()
{
    //cout << "Hello world!" << endl;
    int n,m;
    cin>>n>>m;
    double a,b;
    for(int i=0;i<n;i++)
    {
        cin>>a>>b;
        ans[i]=a*m/b;
    }
    double x=20000;
    for(int i=0;i<n;i++)
    {
        if(ans[i]<x)
        {
            x=ans[i];
        }
    }
    printf("%8f",x);
    //cout<<fixed<<setpricision(6)<<x;
    return 0;
}
