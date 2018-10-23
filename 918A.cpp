#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cstring>
using namespace std;
const int maxn=1000;
int a[maxn+5];
int main()
{
    //cout << "Hello world!" << endl;
    //int f1=1,f2=1,t;
    memset(a,0,sizeof(a));
    /*while(f2<maxn)
    {
        a[f1]=1;
        t=f1;
        f1=f2;
        f2+=t;
    }*/
    a[1]=a[2]=a[3]=a[5]=a[8]=a[13]=a[21]=a[34]=a[55]=a[89]=a[144]=a[233]=a[377]=a[610]=a[987]=1;
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        if(a[i])
            printf("O");
        else
            printf("o");
    }
    printf("\n");
    return 0;
}
