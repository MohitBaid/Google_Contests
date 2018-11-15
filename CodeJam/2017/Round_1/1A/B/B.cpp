#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("in.txt","r",stdin);
	//freopen("A-small-attempt0.in","r",stdin);
	//freopen("A-small-1-attempt0.in","r",stdin);
	//freopen("A-small-1-attempt0.in","r",stdin);
	freopen("out.txt","w",stdout);
	int T;	cin>>T;
	int f=T;
	while(T--)
	{
		int n,p,i,j;	scanf("%d %d",&n,&p);
		int A[n];
		for(i=0;i<n;i++)
			scanf("%d",&A[i]);
		int B[n][p];
		for(i=0;i<n;i++)
		{
			for(j=0;j<p;j++)
				scanf("%d",&B[i][j]);
			sort(B[i],B[i]+p);
		}
		for(i=0;i<n;i++)
		{
			for(j=i;j<n-1;j++)
			{
				if(A[j]>A[j+1])
				{
					int temp=A[j];
					A[j]=A[j+1];
					A[j+1]=temp;
					int t[p],k;
					for(k=0;k<p;k++)
						t[k]=B[j][k];
					for(k=0;k<p;k++)
						B[j][k]=B[j+1][k];
					for(k=0;k<p;k++)
						B[j+1][k]=t[k];		
				}
			}
		}
		float r[n];float d[n][p];
		r[0]=1.0;
		for(i=1;i<n;i++)
		{
			r[i]=A[i]*1.0/A[0];
		}
		for(i=0;i<n;i++)
		{
			cerr<<r[i]<<" ";//=A[i]*1.0/A[0];
		}
		cerr<<endl;
		for(i=0;i<n;i++)
			for(j=0;j<p;j++)
					d[i][j]=((B[i][j])*1.0)/(A[i]);			
		for(i=0;i<n;i++)
		{
			for(j=0;j<p;j++)
					cerr<<d[i][j]<<" ";			
			cerr<<endl;
		}
		int ans=p;
		for(i=0;i<n;i++)
		{
			int c=0;
			for(j=0;j<p;j++)
			{
				if(d[i][j]>0)
					c+=d[i][j];
			}
			if(ans>c)
				ans=c;
		}		
		printf("Case #%d: %d\n",f-T,ans);
		cerr<<endl<<endl;
	}	
	
}
