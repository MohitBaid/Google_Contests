#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("in.txt","r",stdin);
	freopen("out.txt","w",stdout);
	int t;	scanf("%d",&t);
	int f=t;
	while(t--)
	{
		long long int n,k,p=0,a,b;
		cin>>n>>k;
		cout<<n <<" "<<k<<" ";
		if(n%2 && k==1)
		{
			a=n/2;
			b=n/2;
			printf("Case #%d: %lld %lld\n",f-t,a/k,b/k);
		}
		else
		{
				while(n%2 && k>1 &&n!=1)
				{
					k=k/2;
					n=n/2;
				}
				if(n==1)
				{
					a=n/2;
					b=n/2;
					printf("Case #%d: %lld %lld\n",f-t,a/k,b/k);
				}
				else if(n%2 && k==1)
				{	
					a=n/2;
					b=n/2;
					printf("Case #%d: %lld %lld\n",f-t,a/k,b/k);
				}		
				else
				{
					a=n/2;
					b=a-1;
					printf("Case #%d: %lld %lld\n",f-t,a/k,b/k);
				}
		}
	}
}
