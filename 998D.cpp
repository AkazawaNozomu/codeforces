#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn=1e5+5;
int ans[30],cur[30],tmp[30];
void plus(void)//ans+cur
{
	
}
void C(int a,int b)//c(a,b),cur
{
	memset(tmp,0,sizeof(tmp));
	int p=0,t=a;
	while(a)
	{
		cur[p++]=a%10;
		a/=10;
	}
	if(b>=2)
	{
		t--;
		while(t)
		{
			tmp[p]
		}
	}
	
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	int n;
	cin>>n;
	if(n==1)cout<<4<<endl;
	else if(n==2)cout<<10<<endl;
	else if(n==3)cout<<20<<endl;
	else
	{
		ans[0]=4;
		for(int i=1;i<4;i++)
		{
			memset(cur,0,sizeof(cur));
			cur[0]=1;
			C(n-1,i);
			plus();
		}
	}
	int p;
	for(int i=29;i>0;i--)
	{
		if(i!=0)
		{
			p=i;break;
		}
	}
	for(int i=p;i>0;i--)
	{
		cout<<ans[i];
	}
	cout<<endl;
	return 0;
}

