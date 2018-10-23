#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;
long long a,b;
int main()
{
    //cout << "Hello world!" << endl;
    //return 0;
    scanf("%I64d%I64d",&a,&b);
    if(b-a>=10)
        printf("0\n");
    else if(a==b)
        printf("1\n");
    else
    {
        int ans=1;
        for(long long i=a+1;i<=b;i++)
        {
            ans*=(i%10);
            ans%=10;
        }
        printf("%d\n",ans);
    }
    return 0;
}
