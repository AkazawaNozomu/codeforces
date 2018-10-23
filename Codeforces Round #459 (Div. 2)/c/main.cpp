#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cstring>
using namespace std;
const int maxn=5005;
char s[maxn];
bool f[maxn][maxn];
inline bool ispre(int l,int r)
{
    if(r-l==2)
    {
        if((s[l]=='('||s[l]=='?')&&(s[r]==')'||s[r]=='?'))
        {
            return true;f[l][r]=1;
        }
        else
            return false;
    }

}
int main()
{
    //cout << "Hello world!" << endl;
    cin>>s;
    //memset(f,0,)
    int slen=strlen(s),ans=0;
    for(int i=slen-2;i>=0;i++)
    {
        for(int len=2;len<slen-i;len+=2)
        {
            if(ispre(i,i+len))
            {
                ans++;f[i][i+len]=1;
            }
        }
    }
    cout<<ans;
    return 0;
}
