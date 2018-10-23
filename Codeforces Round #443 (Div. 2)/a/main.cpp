#include <iostream>
#include <cstdlib>
#include <cstdio>
using namespace std;
const int maxi=1005;
int s[maxi],d[maxi];
int main()
{
    //cout << "Hello world!" << endl;
    int n,ans=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d%d",&s[i],&d[i]);
        //int workday=s[i];
    }
    ans=s[0];
    for(int i=1;i<n;i++)
    {
        ans++;
        if(ans<s[i])
            ans=s[i];
        while((ans%d[i])!=(s[i]%d[i]))
        {
            ans++;
        }
        //printf("%d:%d\n",i,ans);
    }
    printf("%d",ans);
    //for(int i=1;)
    return 0;
}
