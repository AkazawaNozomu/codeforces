#include<iostream>
#include<cstring>
#include<cstdlib>
#include<cstdio>
using namespace std;
const int maxn=105;
char s[maxn][maxn];bool f[maxn];int n;
int main()
{
	scanf("%d",&n);
	memset(f,0,sizeof(f));
	for(int i=0;i<n;i++)
    {
        scanf("%s",s[i]);
    }
    for(int i=1;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            //cout<<strcmp(s[i],s[j])<<" "<<i<<" "<<j<<endl;
            if(strcmp(s[i],s[j])==0)
            {
                f[i]=1;break;
            }
        }
    }
    //for(int i=0;i<n;i++)
    //{
       // printf(s[i]);
        //printf("\n");
   // }
    if(f[0])
        printf("YES");
    else
        printf("NO");
    for(int i=1;i<n;i++)
    {
        if(f[i])
            printf("\nYES");
        else
            printf("\nNO");
    }
    return 0;
}