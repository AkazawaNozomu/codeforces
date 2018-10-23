// fyt
#include<bits/stdc++.h>
#define int long long
#define double long double
using namespace std;


signed main(){
	ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
	int n,k;
	string s;
	cin>>n>>k;
	cin>>s;
	string ans;
	int len = k/2;
	int r = 0;
	int index = 0;
	for (int i=0; i<n; i++){
		if(s[i] == '('){
			if(index<len){
				index++;
				ans.push_back('(');
			}
		}
		else{
			if(r < len){
				r++;
				ans.push_back(')');
			}
		}
	}
	cout<<ans<<endl;
	return 0;
}
