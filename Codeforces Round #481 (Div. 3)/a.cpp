#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <algorithm>
#define ll long long
using namespace std;
const int maxn=55;
int a[maxn],b[maxn];
int main()
{
	std::ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int p=0;
    for(int i=n-1;i>=0;i--)
    {
        bool f=0;
        for(int j=0;j<p;j++)
            if(a[i]==b[j])
                f=1;
        if(!f)
            b[p++]=a[i];
    }
    int s=0;
    for(int i=0;i<n;i++)
        if(b[i])
            ++s;
    cout<<s<<endl;
    for(int i=s-1;i>=0;i--)
        cout<<b[i]<<" ";
	return 0;
}
