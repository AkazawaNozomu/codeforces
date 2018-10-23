#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <algorithm>
#define ll long long
using namespace std;
const int maxn=105;
int a[maxn],vis[maxn];
int main()
{
	std::ios::sync_with_stdio(false);
	cin.tie(0);
	int n,k,sum=0,maxa=0;
	cin>>n>>k;
	for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(!vis[a[i]])
        {
            vis[a[i]]=i+1;
            sum++;
            maxa=max(maxa,a[i]);
        }
    }
    //sort(vis,vis+maxa+1);
    if(sum<k)
        cout<<"NO\n";
    else
    {
        cout<<"YES\n";
        //bool f=0;
        for(int i=0;i<=maxa&&k;i++)
        {
            if(vis[i])
            {
                //if(f)
                //{
                    //cout<<' '<<vis[i];sum--;
                //}
                //else
                //{
                    cout<<vis[i]<<' ';k--;//f=1;
                //}
            }
        }
        cout<<endl;
    }
	return 0;
}
