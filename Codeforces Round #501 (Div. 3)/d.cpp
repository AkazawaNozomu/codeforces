#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn=1e5+5;
ll n,k,s;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	cin>>n>>k>>s;
	if((n-1)*k<s||s<k)
	{
		cout<<"NO\n";
		return 0;
	}
	if(s%k==0)
	{
		ll t=s/k;
		cout<<"YES\n";
		for(int i=1;i<=k;i++)
		{
			if(i%2)cout<<t+1<<" ";
			else cout<<1<<" ";
		} 
	}
	else
	{
		ll t=s/k+1;
		if(s>t*(k-1))
		{
			cout<<"YES\n";
			if(1+(s-(k-1)*t)>n||t+1-(s-(k-1)*t)<1)
			{
				for(int i=1;i<k;i++)
				{
					if(i%2)cout<<n<<" ";
					else cout<<n-t<<" ";
				}
				if(k%2)cout<<n-t+(s-(k-2)*t-(n-1));
				else cout<<n-(s-(k-2)*t-(n-1));
				return 0;
			}
			for(int i=1;i<k;i++)
			{
				if(i%2)cout<<t+1<<" ";
				else cout<<1<<" ";
			}
			if(k%2)cout<<1+(s-(k-1)*t);
			else cout<<t+1-(s-(k-1)*t);
		}
		else if(s%t==0&&t!=2)
		{
			cout<<"YES\n";
			for(int i=1;i<k-1;i++)
			{
				if(i%2)cout<<t+1<<" ";
				else cout<<1<<" ";
			}
			if(k%2)cout<<2<<" "<<1;
			else cout<<t<<" "<<t-1;
		}
		else
		{
			t--;
			cout<<"YES\n";
			if(1+(s-(k-1)*t)>n||t+1+(s-(k-1)*t)>n)
			{
				for(int i=1;i<k;i++)
				{
					if(i%2)cout<<n<<" ";
					else cout<<n-t<<" ";
				}
				if(k%2)cout<<n-t+(s-(k-2)*t-(n-1));
				else cout<<n-(s-(k-2)*t-(n-1));
				return 0;
			}
			for(int i=1;i<k;i++)
			{
				if(i%2)cout<<t+1<<" ";
				else cout<<1<<" ";
			}
			if(k%2)cout<<1+(s-(k-1)*t);
			else cout<<t+1+(s-(k-1)*t);
		}
	}
	return 0;
}
