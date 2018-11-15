#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("A-large.in","r",stdin);
	freopen("output.txt","w",stdout);
	int T;	cin>>T;
	for(int t = 1;t<=T;t++)
	{
		//cerr<<t<<endl;
		int n,k,i;	cin>>n>>k;
		int A[n];
		for(i=0;i<n;i++)	cin>>A[i];
		sort(A,A+n);
		//for(i=0;i<n;i++)	cerr<<A[i]<<" ";
		int d = 1,ans = 0;
		int f=0;
		for(i=0;i<n;i++)
		{
			if(A[i]>=d)
			{
				ans++;
				f=1;
			}
			if(ans!=0 && ans%k==0 &&f==1)
			{
				d++;
				f=0;
			}
		}	
		cout<<"Case #"<<t<<": "<<ans<<endl;
	}
}
