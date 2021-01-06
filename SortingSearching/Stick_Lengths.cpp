#include<bits/stdc++.h>
using namespace std;

#define ll long long 
#define ld long double

int main()
{
    ll n;
    cin>>n;
    vector<ll>v(n);
    for(ll i=0;i<n;i++) cin>>v[i];

    sort(v.begin(),v.end());
    ll median = v[n/2];
    ll ans=0;
    for(ll i=0;i<n;i++)
    ans+=abs(median-v[i]);

    cout<<ans<<endl;
    

}