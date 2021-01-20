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

typedef vector<int> vi;

const int M=1e9+7;

int main()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
	int t=1;
	//cin>>t;
	while(t--)
	{
		ll n,des_sum,x;
		cin>>n>>des_sum;
		vector<ll>v(n);
		fo(i,0,n)
		{
			cin>>v[i];
		}
		vector<ll>a(des_sum+1,INT_MAX);
		fo(i,0,n)
		{
			if(v[i]<=des_sum)
			a[v[i]]=1;
		}
		ll ans=INT_MAX;
		fo(i,0,des_sum+1)
		{
			ans=INT_MAX;
			fo(j,0,n)
			{
				if(i-v[j]==0)
				{
					ans=1;
				}
				else if(i-v[j]>0 && a[i-v[j]]!=INT_MAX)
				{
					ans=min(ans,(a[i-v[j]]+1));
					a[i]=min(a[i],ans);
				}
			}
		}
		if(ans==INT_MAX)
			cout<<-1<<endl;
		else
			cout<<a[des_sum]<<endl;
	}
	
}