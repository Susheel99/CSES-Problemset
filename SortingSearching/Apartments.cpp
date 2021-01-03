#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll n,m,k,res=0,i,j;
    cin>>n>>m>>k;
    vector<ll>a(n);
    vector<ll>b(m);
    for(i=0;i<n;i++)
    cin>>a[i];

    for(i=0;i<m;i++)
    cin>>b[i];

    sort(a.begin(),a.end());
    sort(b.begin(),b.end());

    i=0;j=0;
    while(i<n and j<m)
    {
        if(b[j]>a[i]+k)
        {
            i++;
        }
        else if(b[j]<a[i]-k)
        {
            j++;
        }
        else
        {
            res++;
            i++;
            j++;
        }
        
    }
    cout<<res<<endl;
}