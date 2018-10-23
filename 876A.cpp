#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
using namespace std;
int n,a,b,c;
const int maxn=105,inf=20000;
int f[maxn][3];
int main()
{
    //cout << "Hello world!" << endl;
    scanf("%d%d%d%d",&n,&a,&b,&c);//a=0,b=1,c=2
    //int rd[3][3];
    //rd[0]={inf,b,c};
    //rd[1]={a,inf,c};
    //rd[2]={a,b,inf};
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<3;j++)
            f[i][j]=0;
    }
    f[1][0]=inf;f[1][1]=a;f[1][2]=b;
    for(int i=2;i<n;i++)
    {
        f[i][0]=min(f[i-1][1]+a,f[i-1][2]+b);
        f[i][1]=min(f[i-1][0]+a,f[i-1][2]+c);
        f[i][2]=min(f[i-1][1]+c,f[i-1][0]+b);
    }
    int ans=f[n-1][0];
    if(ans>f[n-1][1])ans=f[n-1][1];
    if(ans>f[n-1][2])ans=f[n-1][2];
    //for(int i=1;i<n;i++)
    //{
        //printf("%d\n%d\n%d\n",f[i][0],f[i][1],f[i][2]);
    //}
    printf("%d\n",ans);
    return 0;
}