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

int main()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
	int t=1;
	//cin>>t;
	while(t--)
	{
		ll n,x;
		cin>>n>>x;
		vector<ll>v(n);
		vector<ll>a(x+1);

		fo(i,0,n)
		{
			cin>>v[i];
		}
		fo(i,0,n)
		{
			if(v[i]<=x)
				a[v[i]]++;
		}
		fo(i,0,x+1)
		{
			fo(j,0,n)
			{
				if(i-v[j]>=0)
					a[i]=(a[i]+a[i-v[j]])%M;
			}
		}
		cout<<a[x]<<endl;
	}	
}