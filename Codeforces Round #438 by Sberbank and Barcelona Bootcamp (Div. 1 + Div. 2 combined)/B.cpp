#include<cstdio>
#include<cstring>
#include<cstdlib>
using namespace std;
bool f[12]={0,0,0,0,0,0,0,0,0,0,0,0};
int main()
{
	int h,m,s,t1,t2;
	scanf("%d%d%d%d%d",&h,&m,&s,&t1,&t2);
	if(s!=0)
	{
		f[s/5]=1;
		f[m/5]=1;
		if(h==12)f[h-12]=1;
		else f[h]=1;
	}
	else
	{
		f[11]=1;f[0]=1;
		if(m==0)
		{
			f[h-1]=1;
			if(h==12)f[h-12]=1;
			else f[h]=1;
		}
		else if(m%5==0)
		{
			f[m/5-1]=1;f[m/5]=1;
			if(h==12)f[h-12]=1;
			else f[h]=1;
		}
		else
		{
			f[m/5]=1;
			if(h==12)f[h-12]=1;
			else f[h]=1;
		}
	}
	t1%=12;t2%=12;bool flag=0;
	int p;
	for(p=t1;p!=t2;p++)
	{
		if(p>=12)p-=12;
		if(p<0)p+=12;
		if(f[p])break;
	}
	if(p==t2)flag=1;
	for(p=t1;p!=t2;p--)
	{
		if(flag)break;
		if(p>=12)p-=12;
		if(p<0)p+=12;
		if(p==0)
		{
			if(f[11])break;
		}
		else
		{
			if(f[p-1])break;
		}
	}
	if(p==t2)flag=1;
	if(flag)printf("yes");
	else printf("no");
}
