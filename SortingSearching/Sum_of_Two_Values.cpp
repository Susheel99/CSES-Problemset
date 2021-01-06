#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll n,x,i;
    cin>>n>>x;
    vector<ll>v(n);
    for(i=0;i<n;i++) cin>>v[i];
    unordered_map<ll,ll>m1,m2;
    for(i=0;i<n;i++)
    {
        m1[v[i]]=m2[v[i]]+1;
    }
    for(i=0;i<n;i++)
    {
        m2[v[i]]=i;
    }
    for(i=0;i<n;i++)
    {
        if(m1[x-v[i]]>=1)
        {
            if(i!=m2[x-v[i]]){
            cout<<i+1<<" "<<m2[x-v[i]]+1<<endl;
            return 0;
            }
        }
    }
    cout<<"IMPOSSIBLE"<<endl;
}