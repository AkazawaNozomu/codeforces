#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn=1e5+5;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
    int n,k;string s;
    cin>>n>>k>>s;
    int ans=n*k,res=n;
    for(int i=n-1;i>0;i--)//postfix
    {
        bool f=0;
        for(int j=0;j+i<n;j++)
        {
            if(s[j]!=s[j+i])
            {
                f=1;break;
            }
        }
        if(f)continue;
        int cur=(n-i)+i*k;
        ans=min(ans,cur);
        if(ans==cur)res=i;
    }
    for(int i=0;i<n-res;i++)cout<<s[i];
    for(int i=0;i<k;i++)
    {
        for(int j=n-res;j<n;j++)cout<<s[j];
    }
	return 0;
}
