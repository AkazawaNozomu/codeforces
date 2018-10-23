#include <iostream>
#include <cstdlib>
#include <cstring>
#include <cstdio>
#include <cmath>
#include <algorithm>
using namespace std;
int a[10]={1,0,0,0,1,0,1,0,2,1};
int main()
{
    //cout << "Hello world!" << endl;
    int k;
    cin>>k;
    if(k>36)
        cout<<"-1"<<endl;
    else
    {
        while(k>1)
        {
            cout<<"8";
            k-=2;
        }
        while(k>0)
        {
            cout<<"4";
            k--;
        }
        cout<<endl;
    }
    return 0;
}
