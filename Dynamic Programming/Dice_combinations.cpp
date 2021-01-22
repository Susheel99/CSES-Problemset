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

// vector<ll>v {1,2,3,4,5,6};
// bool flag=true;ll req=0,ans=0;

// void dice(ll sum,int i)
// {
// 	sum=sum+v[i];
// 	//cout<<sum<<endl;
// 	if(sum==req)
// 	{
// 		ans=(ans+1)%M;
// 		flag=false;
// 		return ;
// 	}
// 	for(ll i=0;i<6;i++)
// 	{
// 		if(flag==false)
// 		{
// 			flag=true;
// 			break;
// 		}
// 		dice(sum,i);
// 		//sum-=v[i];
// 	}
// }

// int main()
// {
//     ios_base::sync_with_stdio(false); 
//     cin.tie(NULL); 
// 	int t=1;
// 	//cin>>t;
// 	while(t--)
// 	{
		
// 		cin>>req;
// 		ll sum=0;
// 		for(ll i=0;i<6;i++)
// 		{
// 			if(flag==false)
// 				break;
// 			dice(sum,i);
// 			sum=0;
// 		}
// 		cout<<ans<<endl;
// 	}	
// 	// for(auto c:v)
// 	// 	cout<<c<<endl;
// }

int main()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
	int t=1;
	//cin>>t;
	while(t--)
	{
	  ll n;
	  cin >> n;
	  vector<ll>v(n+1);
	  v[0] = 1;
	  for (int i = 1; i <= n; i++)
	   {
	    for (int j = 1; j <= 6; j++)
	     {
	     	if(i-j>=0)
	        v[i]=(v[i]+v[i-j])%M;
	    }
	  }
      cout<<v[n]<<endl;
   }
}