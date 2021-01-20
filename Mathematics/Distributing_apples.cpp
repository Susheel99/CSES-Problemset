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

int x,y,gcd1;

void extended_euclid(int a,int b)
{
	if(b==0)
	{
		x=1;
		y=0;
		gcd1=a;
		return;
	}
	extended_euclid(b,a%b);
	int cx=y;
	int cy=x-(a/b)*y;

	//cout<<cx<<" "<<cy<<endl;
	x=cx;
	y=cy;

}

int mul_mod_inverse(int a,int m)
{
	//asumming that inverse exits(gcd(a,m)=1)
	extended_euclid(a,m);
	return (x+m)%m;                //making values positive
}

int main()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
	int t=1;
	//cin>>t;
	while(t--)
	{
		ll n,m,res=1;
		cin>>n>>m;
		ll fact[2000001];
		fact[0]=1;
        fact[1]=1;
        for(int i=2;i<=2000000;i++)
        {
           fact[i]=(fact[i-1]*i)%M;
        }
        res=(fact[n+m-1]*mul_mod_inverse(fact[n-1],M))%M;
        res*=mul_mod_inverse(fact[m],M);
        res=res%M;
        cout<<res<<endl;
		
	}	
}