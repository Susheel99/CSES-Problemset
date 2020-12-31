#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int i=0,val=1,res=-1;
    int n=s.length();
    while(i<n)
    {
        if(s[i]==s[i+1])
        {
            val++;
        }
        else
        {
            res=max(res,val);
            val=1;
        }
        i++; 
    }
    cout<<res<<endl;
}