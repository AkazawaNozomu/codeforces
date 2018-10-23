#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn=1e5+5;
struct node
{
	ll x,y;
}a[maxn];

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i].x>>a[i].y;
		if(a[i].y*a[i-1].y<0)
		{
			cout<<-1;
			return 0;
		}
	}
	long double l=0,r=1e18,mid;
	if(a[1].y<0)
	{
		for(int i=1;i<=n;i++)
		{
			a[i].y*=-1;
			l=max((long double)a[i].y,l);
		}
	}
	else
	{
		for(int i=1;i<=n;i++)
		{
			l=max((long double)a[i].y,l);
		}
	}
	l/=2;
	for(int i=0;i<150;i++)
	{
		mid=(l+r)/2;
		long double l1=-1e14,r1=1e14,tmp1,tmp2;
		int t = 0;
		for(int j=1;j<=n;j++)
		{
			tmp1=fabs((long double)a[j].y-mid);
			if(mid<=tmp1)
			{
				t = 1;break;
			}
			tmp2=sqrt(mid*mid-tmp1*tmp1);
			//cout << fixed << setprecision(9) << a[j].x << " " << tmp2 << " " << -(tmp2-a[j].x) << " - ";
			l1=max(l1,-(tmp2-a[j].x));
			//cout << fixed << setprecision(9) << tmp2+a[j].x << "\n";
			r1=min(r1,tmp2+a[j].x);
		}
		if(l1<r1&&!t)r=mid;
		else l=mid;
		//cout<<fixed<<setprecision(9)<<"------"<<l1<<" "<<r1<<" "<<mid<<" "<<tmp1<<" "<<tmp2<<endl;
	}
	cout<<fixed<<setprecision(9)<<l<<endl;
	//printf("%.9lf\n",l);
	return 0;
}

