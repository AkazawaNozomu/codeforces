#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
typedef long long ll;
const int maxn=2000+5;
string a[maxn];
int dp[maxn][maxn],f[maxn][maxn];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int n,k,maxl=-1;
    cin>>n>>k;
    for(int i=0;i<n;i++)cin>>a[i];
    memset(dp,-1,sizeof(dp));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(!i&&!j)dp[i][j]=(a[i][j]=='a')?0:1;

            int tmp1=dp[i][j]+((a[i+1][j]=='a')?0:1),tmp2=dp[i][j]+((a[i][j+1]=='a')?0:1);
            if(dp[i+1][j]>tmp1||dp[i+1][j]==-1)dp[i+1][j]=tmp1;
            if(dp[i][j+1]>tmp2||dp[i][j+1]==-1)dp[i][j+1]=tmp2;

            if(dp[i][j]<=k&&i+j>maxl)maxl=i+j;
        }
    }
    //cout<<maxl<<endl;
    for(int i=0;i<maxl+1;i++)cout<<'a';
    for(int i=0;i<n;i++)
    {
        if(maxl-i>=0&&maxl-i<n)
        {
            if(dp[i][maxl-i]<=k)f[i+1][maxl-i]=f[i][maxl-i+1]=1;
        }
    }
    if(!k)f[0][0]=1;
    for(int l=maxl+1;l<=2*n-2;l++)
    {
        char amin='z';
        for(int i=0;i<n;i++)
        {
            if(l-i<0||l-i>=n||!f[i][l-i])continue;
            amin=min(amin,a[i][l-i]);
        }
        cout<<amin;
        for(int i=0;i<n;i++)
        {
            if(l-i<0||l-i>=n||!f[i][l-i])continue;
            if(a[i][l-i]==amin)
            {
                f[i+1][l-i]=1;
                f[i][l-i+1]=1;
            }
        }
    }
    return 0;
}
