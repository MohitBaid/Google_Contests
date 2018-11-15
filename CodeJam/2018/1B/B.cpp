#include<bits/stdc++.h>
using namespace std;
#define int long long int
main()
{
	int T;	cin>>T;
	for(int t=1;t<=T;t++)
	{
		int s,i,j,k;	cin>>s;
		int D[s],A[s],B[s],M[s],N[s],ans[s+2],C[s][s];
		for(i=0;i<s;i++)
		{
			cin>>D[i]>>A[i]>>B[i];
			M[i]=D[i]+A[i];
			N[i]=D[i]-B[i];
			ans[i]=-1;
			for(j=0;j<s;j++)	C[i][j]=0;
		}
		ans[s]=-1;
		for(i=0;i<s;i++)
		{
			for(j=0;j<s;j++)
			{
				int mp=M[i];
				int np=N[j];
				int st=min(i,j);
				for(k=0;k<s;k++)
				{
					if(M[k]!=mp && N[k]!=np)
					{
						if(C[st][k-1]==0)
						{
							ans[k-st]++;
							C[st][k-1]=1;
						}
						st=k+1;	
					}
				}
				if(C[st][k-1]==0)
				{
					ans[k-st]++;
					C[st][k-1]=1;
				}
			}
		}
		k=s;
		while(ans[k]==-1)	k--;
		cout<<"Case #"<<k<<": "<<k<<" "<<(ans[k]+1)<<endl;
	}	
}
