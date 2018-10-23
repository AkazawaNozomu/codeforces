#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <algorithm>
#define ll long long
using namespace std;
const int maxn=105;
struct st
{
    int len;
    char c[maxn];
}s[maxn];
bool cmp(st s1,st s2)
{
    return s1.len<s2.len;
}
int main()
{
	std::ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
    {
        cin>>s[i].c;
        s[i].len=strlen(s[i].c);
    }
    sort(s,s+n,cmp);bool f1=0,f2=0;
    //for(int i=0;i<n;i++)
        //cout<<s[i].c<<endl;
    if(n==1)
    {
        cout<<"YES"<<endl;
        for(int i=0;i<n;i++)
            cout<<s[i].c<<endl;
    }
    for(int i=0;i<n-1;i++)
    {
        f1=0;
        for(int j=0;j<=s[i+1].len-s[i].len;j++)
        {
            f2=1;
            for(int k=0;k<s[i].len;k++)
            {
                if(s[i].c[k]!=s[i+1].c[k+j])
                {
                    //f=1;cout<<"NO"<<endl;break;
                    f2=0;break;
                }
            }
            if(f2)
            {
                f1=1;break;
            }
            //if(f)break;
        }
        if(!f1)
        {
            cout<<"NO"<<endl;
            break;
        }
        //if(f)break;
    }
    if(f1)
    {
        cout<<"YES"<<endl;
        for(int i=0;i<n;i++)
            cout<<s[i].c<<endl;
    }
	return 0;
}
