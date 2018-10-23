#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;
const int maxn = 2005;
int x[maxn],y[maxn];
int main()
{
    //cout << "Hello world!" << endl;
    //int s = 2^7;
    //cout << s << endl;
    /*int n;
    scanf("%d",&n);
    for (int i = 0;i < n;i++)
        scanf("%d",&x[i]);
    for (int i = 0;i < n;i++)
        scanf("%d",&y[i]);
    int ans = 0;
    for (int i = 0;i < n;i++)
    {
        for (int j = 0;j < n;j++)
        {
            int t = x[i]^y[j];
            for(int k = 0;k < n;k++)
            {
                if(x[k]==t || y[k]==t)
                {
                    ans++;break;
                }
            }
        }
    }
    if(ans%2==0)printf("Karen\n");
    else printf("Koyomi\n");
    //printf("%d",ans);*/
    printf("Karen\n");
    return 0;
}
