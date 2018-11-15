#include<bits/stdc++.h>
using namespace std;
int main()
{
	//freopen("in.txt","r",stdin);
	freopen("A-small-attempt1.in","r",stdin);
	//freopen("A-small-1-attempt0.in","r",stdin);
	freopen("out.txt","w",stdout);
	int T;	cin>>T;
	int f=T;
	while(T--)
	{
			int d,n;	cin>>d>>n;
			int K[n],S[n],L[n];
			for(int i=0;i<n;i++)
			{
				cin>>K[i]>>S[i];
				L[i]=d-K[i];
			}
			if(n==2)
			{
				if(K[0]<K[1])
				{
					int temp=K[0];
					K[0]=K[1];
					K[1]=temp;
				
					temp=S[0];
					S[0]=S[1];
					S[1]=temp;
					
					temp=L[0];
					L[0]=L[1];
					L[1]=temp;
				}
				if(S[0]>=S[1])
				{
					double t=L[1]*1.0/S[1];
					double ans=d/t;
					printf("Case #%d: %.8lf\n",f-T,ans);
				}			
				else
				{
					int k=K[0]-K[1];
					if(k>(d-K[0]))
					{
						double t=L[1]*1.0/S[1];
						double ans=d/t;
						printf("Case #%d: %.8lf\n",f-T,ans);
					}
					else
					{
						int diff=S[1]-S[0];
						double t=k*1.0/diff;
						int g=t*S[0]+K[0];
						t+=((d-g)/S[0]);
						double ans=d/t;
				    	printf("Case #%d: %.8lf\n",f-T,ans);
					}
				}
			}
			else
			{
					double t=L[0]*1.0/S[0];
					double ans=d/t;
					printf("Case #%d: %.8lf\n",f-T,ans);
			}
	}	
}
