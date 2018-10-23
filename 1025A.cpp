#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn=1e5+5;
string s;
bool vis[30];
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
    int n;bool f=0;
    cin>>n;
    cin>>s;
    for(int i=0;i<n;i++)
    {
        if(vis[s[i]-'a'])
        {
            f=1;break;
        }
        else vis[s[i]-'a']=1;
    }
    if(f||n==1)cout<<"YES\n";
    else cout<<"NO\n";
	return 0;
}
