#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cstring>
using namespace std;
const int maxn=1005;
struct server
{
    int a,b,c,d;
    char name[10];
}s[maxn];
char command[10];
int main()
{
    //cout << "Hello world!" << endl;
    int n,m;
    scanf("%d%d",&n,&m);
    //printf("%d%d\n",n,m);
    for(int i=0;i<n;i++)
    {
        //gets(s[i].name);
        cin>>s[i].name;
        scanf("%d.%d.%d.%d",&s[i].a,&s[i].b,&s[i].c,&s[i].d);
        //puts(s[i].name);
        //printf("%d%d%d%d\n",s[i].a,s[i].b,s[i].c,s[i].d);
    }
    int sa,sb,sc,sd;
    for(int i=0;i<m;i++)
    {
        cin>>command;
        scanf("%d.%d.%d.%d;",&sa,&sb,&sc,&sd);
        for(int j=0;j<n;j++)
        {
            if(sa==s[j].a&&sb==s[j].b&&sc==s[j].c&&sd==s[j].d)
            {
                printf(command);
                printf(" %d.%d.%d.%d; #",sa,sb,sc,sd);
                printf(s[j].name);
                printf("\n");
                break;
            }
        }
    }
    return 0;
}
