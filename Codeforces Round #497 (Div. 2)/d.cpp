#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn=1e5+5;
int t,a,b,c;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	cin>>t;
	while(t--)
	{
		set<int>ia,ib,ic,iab,iac,ibc,iabc;
		cin>>a>>b>>c;
		for(int i=1;i*i<=a;i++)
		{
			if(a%i==0)
			{
				ia.insert(i);ia.insert(a/i);
				iab.insert(i);iab.insert(a/i);
				iac.insert(i);iac.insert(a/i);
				iabc.insert(i);iabc.insert(a/i);
			}
		}
		for(int i=1;i*i<=b;i++)
		{
			if(b%i==0)
			{
				ib.insert(i);ib.insert(b/i);
				iab.insert(i);iab.insert(b/i);
				ibc.insert(i);ibc.insert(b/i);
				iabc.insert(i);iabc.insert(b/i);
			}
		}
		for(int i=1;i*i<=c;i++)
		{
			if(c%i==0)
			{
				ic.insert(i);ic.insert(c/i);
				ibc.insert(i);ibc.insert(c/i);
				iac.insert(i);iac.insert(c/i);
				iabc.insert(i);iabc.insert(c/i);
			}
		}
		ll ai=iabc.size()-ibc.size(),bi=iabc.size()-iac.size(),ci=iabc.size()-iab.size();
		ll abi=iabc.size()-ic.size()-ai-bi,aci=iabc.size()-ib.size()-ai-ci,bci=iabc.size()-ia.size()-ci-bi; 
		ll abci=iabc.size()-ai-bi-ci-abi-aci-bci;
		cout<<ai<<" "<<bi<<" "<<ci<<" "<<abi<<" "<<bci<<" "<<aci<<" "<<abci<<endl;
		ll ans1=ai*bi*ci;//a b c
		ll ans2=(ai+abi+aci+abci)*(bci+bci*(bci-1)/2);//a/ab/ac/abc bc bc
		ll ans3=(bi+abi+bci+abci)*(aci+aci*(aci-1)/2);//ac b ac
		ll ans4=(ci+aci+bci+abci)*(abi+abi*(abi-1)/2);//ab ab c
		ll ans5=(abci+abci*(abci-1)+abci*(abci-1)*(abci-2)/6);//abc acb abc
		ll ans6=(ai+bi+ci+abi+bci+aci)*(abci+abci*(abci-1)/2);//a abc abc+abc b abc+abc abc c
		ll ans7=ai*(ci*(abi+bci+abci)+aci*(bi+abi+bci+abci)+bci*(bi+abi+abci)+abci*(bi+abi+bci));//a ... ...
		ll ans8=abi*(ci*(bi+bci+abci)+aci*(bi+bci+abci)+bci*(bi+abci)+abci*(bi+bci));//ab ... ...
		ll ans9=aci*(ci*(bi+abi+bci+abci)+bci*(bi+abi+abci)+abci*(bi+abi+bci));//ac ... ...
		ll ans10=abci*(ci*(bi+abi+bci)+aci*(bi+abi+bci)+bci*(bi+abi));//abc ... ...
		//ll ans11=;//2abc
		ll ans=ans1+ans2+ans3+ans4+ans5+ans6+ans7+ans8+ans9+ans10;
		cout<<ans<<endl;
	}
	return 0;
}

