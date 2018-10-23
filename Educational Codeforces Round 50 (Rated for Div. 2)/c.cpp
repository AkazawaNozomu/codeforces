#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn=1e5+5;
int dig1[20],dig2[20];
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	ll l,r,q;
    cin>>q;
    while(q--)
    {
        cin>>l>>r;
        int len1=0,len2=0;
        while(l)
        {
            dig1[len1]=l%10;
            l/=10;
            len1++;
        }
        while(r)
        {
            dig2[len2]=r%10;
            r/=10;
            len2++;
        }
        ll ans1,ans2;
        ans1=len1>3?(dig1[len1-1]*(len1-1)*(len1-2)/2*81+(len1-1)*(len1-2)*(len1-3)/6*729):l;
        ans2=len2>3?(dig2[len2-1]*(len2-1)*(len2-2)/2*81+(len2-1)*(len2-2)*(len2-3)/6*729):r;

    }
	return 0;
}
