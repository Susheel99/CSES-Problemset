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
		int n;
		cin>>n;
		ll dr[1000001];
		dr[1]=0;
		dr[2]=1;
		for(int i=3;i<=n;i++)
		{
			dr[i]=(((dr[i-1]+dr[i-2])%M)*(i-1))%M;
		}
		cout<<dr[n]<<endl;
	}	
}
