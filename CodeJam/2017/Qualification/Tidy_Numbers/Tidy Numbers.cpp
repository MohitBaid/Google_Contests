#include<bits/stdc++.h>
using namespace std;
int istidy(long long int n)
{
	int A[20]={0};
	int B[20]={0};
	int m=0,i;
	while(n)
	{
		A[m]=n%10;
		B[m]=A[m];
		n=n/10;
		m++;
	}
	sort(A,A+m);
	for(i=0;i<m;i++)
		if(A[i]!=B[m-i-1])
			return 0;
	return 1;		
}
int main()
{
	freopen("B-large.in","r",stdin);
	freopen("out.txt","w",stdout);
	int t,i,j;	scanf("%d",&t);
	int f1=t;
	while(t--)
	{
		long long int n;	scanf("%lld",&n);
		int m=0;
		int f=n;
		int A[20]={0};
		while(n)
		{	
			n=n/10;
			m++;
		}
		int l=m;
		while(f)
		{
			A[m-1]=f%10;
			f=f/10;
			m--;
		}
		//cout<<l<<"  "<<endl;;
		/*for(j=0;j<l;j++)
				printf("%d",A[i]);
			printf("\n");*/	
		for(i=l-1;i>0;i--)
		{
			if(A[i]<A[i-1])
			{
				A[i-1]--;
				for(j=i;j<l;j++)
						A[j]=9;	
			}
			/*for(j=0;j<l;j++)
				printf("%d",A[i]);
			printf("\n");*/	
		}
		/*while(n--)
		{
			if(istidy(n))
			{
				printf("Case #%d: %lld\n",f-t,n);
				break;
			}
		}*/
		for(i=0;;i++)
			if(A[i]!=0)
				break;
		printf("Case #%d: ",f1-t);
		for(;i<l;i++)
				printf("%d",A[i]);
		printf("\n");	
	}
}
