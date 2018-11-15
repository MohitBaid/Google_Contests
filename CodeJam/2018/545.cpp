#include<bits/stdc++.h>
#define int long long int
using namespace std;
main()
{
	int T;	cin>>T;
	vector < int > v;
	set < pair < int,vector < int > >  > s;
	set < pair < int,vector < int > >  > :: iterator it;
	while(T--)
	{
		int n,i,j;	cin>>n;
		int A[n];
		for(i=0;i<n;i++)	cin>>A[i];
		do
		{
		for(i=0;i<n;i++)	cout<<A[i]<<" ",v.push_back(A[i]);	cout<<endl;	
		int ans=0;	
		for(i=0;i<n;i++)
		{
			vector < int > v;
			for(j=i;j<n;j++)
			{
				v.push_back(A[j]);
				if(v.size()%2!=0)
				{
					sort(v.begin(),v.end());
					ans+=(v[v.size()/2])*(i+1)*(j+1);
				}
			}
		}
		s.insert(make_pair(ans,v));
		v.clear();
		}while(next_permutation(A,A+n));
		for(it=s.begin();it!=s.end();it++)
		{
			cout<<it->first<<":";
			v=it->second;
			for(i=0;i<n;i++)	cout<<v[i]<<" ";	cout<<endl;
		}
	}
}
