#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <algorithm>
#define ll long long
using namespace std;
const int maxn=105;
int a[maxn];
struct exam
{
    int s,d,c;
}b[maxn];
bool cmp(exam e1,exam e2)
{
    if(e1.d>e2.d)return true;
    else if(e1.d==e2.d)
    {
        return
    }
    else return false;
}
int main()
{
	std::ios::sync_with_stdio(false);
	cin.tie(0);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
    {
        cin>>b[i].s>>b[i].d>>b[i].c;
    }

	return 0;
}
