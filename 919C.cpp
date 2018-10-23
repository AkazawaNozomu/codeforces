#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
using namespace std;
const int maxn=2005;
//int seat[maxn][maxn];
int main()
{
    //cout << "Hello world!" << endl;
    //memset(seat,0,sizeof(seat));
    int n,m,k,ans=0;char c;
    scanf("%d%d%d",&n,&m,&k);
    if(k==1)
    {
        char s[maxn];
        for(int i=0;i<n;i++)
        {
            cin>>s;
            for(int j=0;j<m;j++)
            {
                c=s[j];
                if(c=='.')ans++;
            }
        }
        printf("%d",ans);
    }
    else
    {
        int column[maxn];char s[maxn];
        memset(column,0,sizeof(column));
        for(int i=0;i<n;i++)
        {
            int row=0;
            cin>>s;
            for(int j=0;j<m;j++)
            {
                c=s[j];
                if(c=='.')
                {
                    row++;
                    column[j]++;
                    if(j==m-1&&row>=k)ans+=row-k+1;
                    if(i==n-1&&column[j]>=k)ans+=column[j]-k+1;
                }
                else if(c=='*')
                {
                    if(row>=k)ans+=row-k+1;
                    if(column[j]>=k)ans+=column[j]-k+1;
                    row=0;column[j]=0;
                }
            }
            //scanf("\n");
        }
        printf("%d",ans);
    }
    return 0;
}