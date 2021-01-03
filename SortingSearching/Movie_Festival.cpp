#include<bits/stdc++.h>
using namespace std;

#define ll long long

bool comp(const pair<int,int> &a,const pair<int,int> &b) 
{ 
    return (a.second < b.second); 
}

int main()
{
    ll n,i,sec,res=1;
    cin>>n;
    vector<pair<ll,ll>>v;
    for(ll i=0;i<n;i++)
    {
        ll x,y;
        cin>>x>>y;
        v.push_back(make_pair(x,y));
    }
    sort(v.begin(),v.end(),comp);
    sec=v[0].second;
    for(i=1;i<n;i++)
    {
        if(v[i].first>=sec)
        {
            res++;
            sec=v[i].second;
        }
    }
    cout<<res<<endl;
}