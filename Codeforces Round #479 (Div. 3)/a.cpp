#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <algorithm>
#define ll long long
using namespace std;
//const int maxn=100005;
int main()
{
	std::ios::sync_with_stdio(false);
	cin.tie(0);
	int n,k;
	cin>>n>>k;
	while(k--)
    {
        if(n%10)n--;
        else n/=10;
    }
    cout<<n<<endl;
	return 0;
}
