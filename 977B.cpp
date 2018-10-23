#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <algorithm>
#define ll long long
using namespace std;
const int maxn=105;
char s[maxn];int t[30][30];
int main()
{
	std::ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin>>n;
	cin>>s;
	for(int i=0;i<n-1;i++)
    {
        int ch1=s[i]-'A',ch2=s[i+1]-'A';
        t[ch1][ch2]++;
    }
    int maxi=0,maxj=0;
    for(int i=0;i<26;i++)
    {
        for(int j=0;j<26;j++)
        {
            if(t[i][j]>t[maxi][maxj])
            {
                maxi=i;maxj=j;
            }
        }
    }
    char c1='A'+maxi,c2='A'+maxj;
    cout<<c1<<c2<<endl;
	return 0;
}
