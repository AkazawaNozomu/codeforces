#include <iostream>
#include <cstdlib>
#include <cstring>
#include <cstdio>
#include <cmath>
#include <algorithm>
using namespace std;
const int maxk=100005;
long long a[maxk];
//const long long inf=1e18+5;
int main()
{
    //cout << "Hello world!" << endl;
    long long n;int k;
    cin>>n;
    cin>>k;
    long long id=1,num,lef;
    cin>>a[1];
    lef=n%a[1];
    num=n/a[1];
    for(int i=2;i<=k;i++)
    {
        cin>>a[i];
        if(lef>(n%a[i]))
        {
            lef=n%a[i];
            num=n/a[i];
            id=i;
        }
    }
    cout<<id<<" "<<num<<endl;
    return 0;
}
