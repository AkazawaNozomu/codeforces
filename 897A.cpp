#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
using namespace std;
const int maxn=105;
char s[maxn];
bool equalc(char char1,char char2)
{
    return (int)char1==(int)char2;
}
int main()
{
    //cout << "Hello world!" << endl;
    int n,m,l,r;char c1,c2;
    scanf("%d %d\n",&n,&m);
    for(int i=0;i<n;i++)
    {
        scanf("%c",&s[i]);
    }
    scanf("\n");
    for(int j=0;j<m;j++)
    {
        scanf("%d %d %c %c",&l,&r,&c1,&c2);
        for(int i=l-1;i<r;i++)
        {
            if(equalc(s[i],c1))
            s[i]=c2;
        }
    }
    puts(s);
    return 0;
}
