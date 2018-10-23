#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <algorithm>
#define ll long long
using namespace std;
const int maxn=105;
int a[maxn][maxn];char ch[maxn];
int main()
{
	std::ios::sync_with_stdio(false);
	cin.tie(0);
	int m,n;char c;
	cin>>n>>m;
	for(int i=0;i<n;i++)
    {
        cin>>ch;
        for(int j=0;j<m;j++)
        {
            c=ch[j];
            if(c=='*')a[i][j]=-1;
            else if(c=='.')a[i][j]=0;
            else a[i][j]=c-'0';
        }
        //scanf("\n");
    }
    bool f=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(a[i][j]==-1)continue;
            int sum=0;
            if(i>0)
            {
                sum+=(a[i-1][j]==-1);
            }
            if(i<n-1)
            {
                sum+=(a[i+1][j]==-1);
            }
            if(j>0)
            {
                sum+=(a[i][j-1]==-1);
            }
            if(j<m-1)
            {
                sum+=(a[i][j+1]==-1);
            }
            if(i>0&&j>0)
            {
                sum+=(a[i-1][j-1]==-1);
            }
            if(i>0&&j<m-1)
            {
                sum+=(a[i-1][j+1]==-1);
            }
            if(i<n-1&&j>0)
            {
                sum+=(a[i+1][j-1]==-1);
            }
            if(i<n-1&&j<m-1)
            {
                sum+=(a[i+1][j+1]==-1);
            }
            if(sum!=a[i][j])
            {
                f=1;break;
            }
        }
        if(f)break;
    }
    if(f)cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
	return 0;
}
