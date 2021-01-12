#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007


ll power(ll n,ll p)
{
	if(p==0)
		return 1;


	if(p&1)
	{
		return (n*(power(n,p-1)%mod))%mod;
	}
	ll res=power(n,p/2);
	return ((res)*(res))%mod;
}

int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n,p;
		cin>>n>>p;
		cout<<power(n,p)<<endl;
	}
}

