#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll n,m,ans,pair=0;
    cin>>n>>m;
    vector<ll>v(n);
    for(ll i=0;i<n;i++) cin>>v[i];

    sort(v.begin(),v.end());
    ll i=0,j=n-1;
    while(i<j)
    {
        if(v[i]+v[j]<=m)
        {
            pair++;
            i++;
            j--;
        }
        else
        j--;
    }
    ans=n-pair;
    cout<<ans<<endl;
}