#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn=1e5+5;
string s;
int a[maxn],cnt1=0,fir2;
//priority_queue<int,vector<int>,greater<int> >q2;
//priority_queue<int>q0;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	cin>>s;
	fir2=s.size();
	for(int i=0;i<s.size();i++)
	{
		a[i]=s[i]-'0';
		if(a[i]==1)cnt1++;
		if(fir2==s.size()&&a[i]==2)fir2=i;
	}
	if(!cnt1)cout<<s<<endl;
	else
	{
		if(fir2==s.size())
		{
			for(int i=0;i<fir2-cnt1;i++)cout<<0;
			for(int i=0;i<cnt1;i++)cout<<1;
			cout<<endl;
		}
		else
		{
			for(int i=0;i<=fir2;i++)
			{
				if(a[i]==0)cout<<a[i];
			}
			for(int i=0;i<cnt1;i++)cout<<1;
			for(int i=fir2;i<s.size();i++)
			{
				if(a[i]!=1)cout<<a[i];
			}
			cout<<endl;
		}
	}
	//int pre0=0,pre2=0;
	/*for(int i=0;i<s.sise();i++)
	{
		//if(i==0)pre0;;
		//else if(i==2)pre2++;
		if(a[i]==0)q0.push(i);
		else if(a[i]==2)q2.push(i);
		else
		{
			if(q2.size()==0)
			{
				
			}
			else
			{
				a[q2.top()]=1;
				a[i]=2;
				
			}
		}
	}*/
	return 0;
}

