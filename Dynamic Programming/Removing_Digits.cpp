#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define fi first;
#define se second;
#define pb push_back;
#define mp make_pair;
#define fo(a, b, c) for (int(a) = (b); (a) < (c); ++(a)) 
#define fon(a, b, c) for (int(a) = (b); (a) <= (c); ++(a)) 
#define fod(a, b, c) for (int(a) = (b); (a) >= (c); --(a)) 
#define fosq(a, b, c) for (int(a) = (b); (a) * (a) <= (c); ++(a)) 
#define foc(a, b, c) for (char(a) = (b); (a) <= (c); ++(a)) 
#define ALL(v) v.begin(), v.end()
#define SORT(v) sort(ALL(v))
#define TC(t) while (t--)
const int M=1e9+7;

int remove_digits(ll n)
{
	if(n==0)
		return 0;

	set<ll>s;
	ll m=n;
	while(m>0)
	{
		ll r=m%10;
		m=m/10;

		if(r!=0)
		s.insert(r);
	}
	ll res=10000;
	for(auto it=s.begin();it!=s.end();it++)
	{
		ll ans=remove_digits(n-(*it))+1;
		res=min(res,ans);
	}
	return res;

}

int main()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
	int t=1;
	//cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		cout<<remove_digits(n)<<endl;
	}
	
}