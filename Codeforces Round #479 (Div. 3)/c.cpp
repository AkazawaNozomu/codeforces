#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <algorithm>
#define ll long long
using namespace std;
const int maxn=200005;
int a[maxn];
/*inline int get_d(int n)//get_digit
{
    int ans=0;
    while(n>0)
    {
        n/=10;
        ++ans;
    }
    return ans;
}*/
int main()
{
	std::ios::sync_with_stdio(false);
	cin.tie(0);
	int n,k;
	cin>>n>>k;
	for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
	if(k==0)
    {
        if(a[0]==1)
        {
            cout<<-1<<endl;return 0;
        }
        else
        {
            cout<<a[0]-1<<endl;return 0;
        }
    }
    if(n==k)
    {
        cout<<a[n-1]<<endl;return 0;
    }
    else
    {
        if(a[k-1]==a[k])
        {
            cout<<-1<<endl;return 0;
        }
        else
        {
            cout<<a[k-1]<<endl;return 0;
        }
    }
    //for(int i=0;i<n;i++)
        //cout<<a[i];
    /*if(n==k)
    {
        if(get_d(a[k-1])>k)
        {
            cout<<-1<<endl;
            return 0;
        }
        else if(get_d(a[k-1])==k)
        {
            cout<<a[k-1]<<endl;
            return 0;
        }
        else
        {
            cout<<1;
            for(int i=0;i<k-1;i++)
                cout<<0;
            cout<<endl;
            return 0;
        }
    }
    int k1=get_d(a[k-1]),k2=get_d(a[k]);
    //cout<<a[k-1]<<a[k]<<k1<<k2;
    if(k1>k||k2<k||a[k-1]==a[k])
    {
        cout<<-1<<endl;
    }
    else if(k1==k)
    {
        cout<<a[k-1]<<endl;
    }
    else if(get_d(a[k]-1)==k)
    {
        cout<<a[k]-1<<endl;
    }
    else
    {
        cout<<-1<<endl;
    }*/
	return 0;
}
