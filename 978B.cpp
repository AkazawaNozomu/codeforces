#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <algorithm>
#define ll long long
using namespace std;
const int maxn=100005;
char s[maxn];
int main()
{
	std::ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin>>n;
	cin>>s;
	int i=0,cnt=0,anx=0;
	for(i=0;i<n;i++)
    {
        if(s[i]=='x')
        {
            cnt++;
        }
        else
        {
            if(cnt>=3)anx+=cnt-2;
            cnt=0;
        }
    }
    if(cnt>=3)anx+=cnt-2;
    cout<<anx;
	return 0;
}
