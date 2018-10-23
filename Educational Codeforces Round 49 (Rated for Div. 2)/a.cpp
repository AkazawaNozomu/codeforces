#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn=1e5+5;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
    int t,n;string s;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cin>>s;
        bool f=0;
        for(int i=0;i<n/2;i++)
        {
            if((s[i]==s[n-1-i])||s[i]==s[n-1-i]+2||s[i]==s[n-1-i]-2);
            else f=1;
        }
        if(f)cout<<"NO\n";
        else cout<<"YES\n";
    }
	return 0;
}
