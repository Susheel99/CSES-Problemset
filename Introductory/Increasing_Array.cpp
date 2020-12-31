#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll res=0,m=-1,n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        ll x;
        cin>>x;
        m=max(m,x);
        if(m-x>0)
        {
            res=res+(m-x);
        }
    }
    cout<<res<<endl;
}