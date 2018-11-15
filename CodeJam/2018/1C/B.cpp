#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T,i,j;	cin>>T;
	for(int t=1;t<=T;t++)
	{
		int n;	cin>>n;
		int A[n+1],B[n+1],C[n+1];
		for(i=0;i<n;i++)
		{
			A[i]=1;
			B[i]=0;
			C[i]=0;
		}
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)	C[j]=0;
			int d;	cin>>d;
			if(d==0)
			{
				cout<<"-1"<<endl;
				fflush(stdout);
			}
			else
			{
				for(j=0;j<d;j++)
				{
					int p;	cin>>p;
					B[p]++;
					C[p]=1;
				}
				int p=-1,max=n+1;
				for(j=0;j<=n;j++)
				{
					if(A[j]==1)
					{
						if(C[j]==1)
						{
							if(B[j]<max)
							{
								max=B[j];
								p=j;										
							}
						}
					}
				}
				if(p!=-1)	A[p]=0;
				cout<<p<<endl;
				fflush(stdout);
			}
		}
	}
}
