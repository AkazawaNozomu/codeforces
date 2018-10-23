#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn=1e5+5;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	ll q,n,m,k;
    cin>>q;
    while(q--)
    {
        cin>>n>>m>>k;
        ll ans,cur;
        ans=min(n,m);
        cur=max(n,m);
        cur-=ans;
        k-=ans;
        if(k<cur)cout<<-1<<endl;
        else if((!cur)&&k%2)cout<<k-2+ans<<endl;
        else if(cur%2&&k%2)cout<<k-1+ans<<endl;
        else if((!(cur%2))&&(!(k%2)))cout<<k+ans<<endl;
        else if((cur%2)&&(!(k%2)))cout<<k-1+ans<<endl;
        else if((!(cur%2))&&(k%2))cout<<k-2+ans<<endl;
        // ans+=(cur-ans)-((cur-ans)%2);
        // ans+=(k-cur)/2;
        /*if(cur>k)cout<<-1<<endl;
        else if(n==m)
        {
            if((k-m)%2)cout<<k-2<<endl;
            else cout<<k<<endl;
        }
        else// if(k-ans>cur-ans)
        {
            if((cur-ans)%2==0)cout<<k-(k-cur)%2<<endl;
            else cout<<k-1<<endl;
        }*/
    }
	return 0;
}
