#include<bits/stdc++.h>
#define int long long int
using namespace std;
main()
{
	int T,i,j,k,t;	cin>>T;
	for(t=1;t<=T;t++)
	{
		int n;	cin>>n;
		int A[n],B[n],C[n];
		for(i=0;i<n;i++)	cin>>A[i],B[i]=A[i],C[i]=1;
		B[0]=A[0];
		C[0]=1;
		for(i=1;i<n;i++)
		{
			int m=0,c=0;
			for(j=0;j<i;j++)
			{
				if(B[j]<=(1LL*6*A[i]))
				{
					if(C[j]>c)
					{
						c=C[j];
						m=B[j];
					}
					else if(C[j]==c)
					{
						if(B[j]<m)
							m=B[j];
					}
				}
			}
			B[i]+=m;
			C[i]+=c;
		}
		int ans=0;
		for(i=0;i<n;i++)
		{
			if(ans<C[i])
				ans=C[i];
		}
		cout<<"Case #"<<t<<": "<<ans<<endl;
	}
}
