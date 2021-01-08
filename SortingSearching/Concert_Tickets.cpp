#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
 
int main()
{
    ll n,m;
    cin>>n>>m;
    vector<ll>v(n);
    vector<ll>u(m);
    for(int i=0;i<n;i++) cin>>v[i];
    for(int i=0;i<m;i++) cin>>u[i];
    
    multiset<int,greater<int>>s;
    for(int i=0;i<n;i++)
    {
	    s.insert(v[i]);
    }

    for(int i=0;i<m;i++)
    {
	    auto it=s.lower_bound(u[i]);
	    if(it==s.end())
		    cout<<-1<<endl;
	    else
	    {
		    cout<<*it<<endl;
		    s.erase(it);
	    }
    }
}
