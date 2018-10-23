#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <algorithm>
#define ll long long
using namespace std;
const int maxn=1005;
int a[maxn];
int main()
{
	std::ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    if(n%2)
        cout<<a[n/2];
    else
        cout<<a[n/2-1];
	return 0;
}
