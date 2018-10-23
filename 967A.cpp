#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <algorithm>
#define ll long long
using namespace std;
const int maxn=105;
int a[maxn];
int main()
{
	std::ios::sync_with_stdio(false);
	cin.tie(0);
	int n,s,h,m,anstime,ansh,ansm;//bool f=0;
	cin>>n>>s;
	cin>>h>>m;
	//cout<<n<<s;
	a[0]=h*60+m;
	if(a[0]>=s+1)
    {
        cout<<"0 0"<<endl;return 0;
    }
	for(int i=1;i<n;i++)
    {
        cin>>h>>m;
        a[i]=h*60+m;
        if(a[i]>=a[i-1]+1+s+1+s)
        {
            anstime=a[i-1]+s+1;
            ansm=anstime%60;
            ansh=anstime/60;
            cout<<ansh<<" "<<ansm<<endl;
            return 0;
        }
    }
    anstime=a[n-1]+s+1;
    ansm=anstime%60;
    ansh=anstime/60;
    cout<<ansh<<" "<<ansm<<endl;
	return 0;
}
