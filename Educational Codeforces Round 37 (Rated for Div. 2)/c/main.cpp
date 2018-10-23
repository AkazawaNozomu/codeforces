#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;
const int maxn=200005;
int a[maxn],sflag[maxn];
int main()
{
    //cout << "Hello world!" << endl;
    int n;
    char c;
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    for(int i=1;i<=n-1;i++)
    {
        cin>>c;
        sflag[i]=c-48;
    }
    sflag[n]=0;
    //for(int i=1;i<=n-1;i++)
        //cout<<sflag[i];
    bool f=0,ok=0;//f=sflag[i-1]
    int sum=0,beginofsum=1;
    for(int i=1;i<=n;i++)
    {
        if(!f&&!sflag[i])
        {
            if(a[i]!=i)
            {
                cout<<"NO"<<endl;ok=1;break;
            }
            else
            {
                beginofsum=i+1;sum=0;f=0;
            }
        }
        else if(f&&!sflag[i])
        {
            sum+=a[i];
            if(sum!=(beginofsum+i)*(i-beginofsum+1)/2)
            {
                cout<<"NO"<<endl;ok=1;break;
            }
            else
            {
                beginofsum=i+1;sum=0;f=0;
            }
        }
        else if(sflag[i])
        {
            sum+=a[i];f=1;
        }
    }
    if(!ok)
    {
        //if((!sflag[n])||((sflag[n])&&sum==(beginofsum+n)*(n-beginofsum+1)/2))
            cout<<"YES"<<endl;
        //else
            //cout<<"NO"<<endl;
    }
    return 0;
}
