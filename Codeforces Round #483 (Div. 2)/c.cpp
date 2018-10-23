#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <algorithm>
#define ll long long
using namespace std;
ll gcd(ll a,ll b)
{
    if(a<b)
    {
        ll t=a;a=b;b=t;
    }
    if(a%b==0)return b;
    else return gcd(b,a%b);
}
int main()
{
	std::ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin>>n;
	while(n--)
    {
        ll p,q,b,temp;
        cin>>p>>q>>b;
        if(p==0)
        {
            cout<<"Finite\n";continue;
        }
        temp=gcd(p,q);
        p/=temp;
        q/=temp;
        //cout<<p<<q;
        if(q==1)
        {
            cout<<"Finite\n";continue;
        }
        if(q==2)
        {
            if(b%2)
                cout<<"Infinite\n";
            else
                cout<<"Finite\n";
            continue;
        }
        temp=q;
        bool f=0;
        for(ll i=2;i*i<temp;i++)
        {
            while(temp!=i)
            {
                if(temp%i==0)
                {
                    if(b%i)
                    {
                        f=1;break;
                    }
                    temp/=i;
                }
                else break;
            }
            if(f)break;
        }
        if(b%temp&&temp%b)f=1;
        if(f)cout<<"Infinite\n";
        else cout<<"Finite\n";
    }
	return 0;
}
