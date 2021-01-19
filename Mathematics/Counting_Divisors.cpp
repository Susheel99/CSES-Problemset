#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		vector<pair<int,int>>v;
		int n;
		cin>>n;
		int i=0;
		for(i=2;i*i<=n;i++)
		{
			int cnt=0;
			if(n%i==0)
			{
				while(n%i==0)
				{
					n=n/i;
					cnt++;
				}
				v.push_back(make_pair(i,cnt));
			}
		}
		if(n!=1)
		{
			v.push_back(make_pair(n,1));
		}

		long long div=1;
		for(int i=0;i<v.size();i++)
		{
			div=div*(v[i].second+1);
		}
		cout<<div<<endl;
	}
}
