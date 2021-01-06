#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
 
int main()
{
    ll n;
    cin>>n;
    vector<ll>v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    ll sum=v[0];
    ll res=sum;
    for(ll i=1;i<n;i++)
    {
        if(sum<0)
        sum=0;
 
        sum+=v[i];
        res=max(res,sum);
    }
    cout<<res<<endl;
}