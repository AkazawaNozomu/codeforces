#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <algorithm>
#define ll long long
using namespace std;
const int maxn=105;
int a[maxn][maxn],r[maxn],c[maxn];
int main()
{
	std::ios::sync_with_stdio(false);
	cin.tie(0);
	int m,n,s=0;
	cin>>n>>m;
	if(n<=m)
    {
        for(int i=0;i<n;i++)
        {
            int rmin=0;
            for(int j=0;j<m;j++)
            {
                cin>>a[i][j];
                if(j==0)rmin=a[i][j];
                else if(a[i][j]<rmin)rmin=a[i][j];
            }
            r[i]=rmin;
            s+=r[i];
            for(int j=0;j<m;j++)
                a[i][j]-=r[i];
        }
        bool f=1;
        for(int i=0;i<m;i++)
        {
            c[i]=a[0][i];
            for(int j=0;j<n;j++)
            {
                if(c[i]!=a[j][i])f=0;
            }
            s+=c[i];
        }
    /*
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(a[i][j]!=r[i]+c[j])
            {
                f=0;break;
            }
        }
    }*/
        if(f)
        {
            cout<<s<<endl;
            for(int i=0;i<n;i++)
            {
            //cout<<r[i];
                if(r[i]>0)
                {
                    for(int j=0;j<r[i];j++)cout<<"row "<<i+1<<endl;
                }
            }
            for(int i=0;i<m;i++)
            {
                if(c[i]>0)
                {
                    for(int j=0;j<c[i];j++)cout<<"col "<<i+1<<endl;
                }
            }
        }
        else
        {
        cout<<-1<<endl;
        }
    }
	else
    {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>a[i][j];
            }
        }
        /*for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cout<<a[i][j];
            }
            cout<<endl;
        }*/
        for(int i=0;i<m;i++)
        {
            c[i]=a[0][i];
            for(int j=0;j<n;j++)
            {
                if(c[i]>a[j][i])c[i]=a[j][i];
            }
            s+=c[i];
            for(int j=0;j<n;j++)
                a[j][i]-=c[i];
        }
        bool f=1;
        for(int i=0;i<n;i++)
        {
            r[i]=a[i][0];
            for(int j=0;j<m;j++)
            {
                if(r[i]!=a[i][j])f=0;
            }
            s+=r[i];
        }
        if(f)
        {
            cout<<s<<endl;
            for(int i=0;i<n;i++)
            {
            //cout<<r[i];
                if(r[i]>0)
                {
                    for(int j=0;j<r[i];j++)cout<<"row "<<i+1<<endl;
                }
            }
            for(int i=0;i<m;i++)
            {
                if(c[i]>0)
                {
                    for(int j=0;j<c[i];j++)cout<<"col "<<i+1<<endl;
                }
            }
        }
        else
        {
        cout<<-1<<endl;
        }
    }
	return 0;
}
