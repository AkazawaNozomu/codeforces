#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <algorithm>
#include <map>
#define ll long long
using namespace std;
const int maxn=200005;
map<int,pair<int,int> >m;
int a[maxn];
int main()
{
	std::ios::sync_with_stdio(false);
	cin.tie(0);
	int k;
	cin>>k;
	for(int i=1;i<=k;i++)
    {
        int n,sum=0;
        cin>>n;
        for(int j=1;j<=n;j++)
        {
            cin>>a[j];sum+=a[j];
        }
        for(int j=1;j<=n;j++)
        {
            if(m.count(sum-a[j]))
            {
                cout<<"YES"<<endl;
                cout<<m[sum-a[j]].first<<" "<<m[sum-a[j]].second<<endl;
                cout<<i<<" "<<j<<endl;
                return 0;
            }
        }
        for(int j=1;j<=n;j++)
        {
            m.insert(make_pair(sum-a[j],make_pair(i,j)));
        }
    }
    cout<<"NO"<<endl;
	return 0;
}
