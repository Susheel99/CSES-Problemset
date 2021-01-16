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
#define mod 1000000007

int main()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
	int t=1;
	//cin>>t;
	while(t--){
		ll n;
		cin>>n;
		//cout<<(1<<n)%mod<<endl;
		ll res=1;
		for(ll i=1;i<=n;i++)
		{
			res=(res*2)%mod;
		}
		cout<<res<<endl;
	}
}