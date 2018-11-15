#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("in.txt","r",stdin);
	freopen("out.txt","w",stdout);
	int t;	scanf("%d",&t);
	int f1=t;
	while(t--)
	{
		long long int n,k,p=0,a,b;
		cin>>n>>k;
		cerr<<n <<" "<<k<<" ";
		if(k>(n/2))
			printf("Case #%d: 0 0\n",f1-t);
		else if(k==1)
			if(n%2)
				printf("Case #%d: %lld %lld\n",f1-t,n/2,n/2);
			else
				printf("Case #%d: %lld %lld\n",f1-t,n/2,n/2-1);
		else
		{				
			priority_queue<long long int> pq;
			pq.push(n);
			long long int f=pq.top();
			while(k>1 && f>1)
			{
				long long int f=pq.top();
				if(f%2)
				{
					pq.pop();
					pq.push(f/2);
					pq.push(f/2);
				}
				else
				{
					pq.pop();
					pq.push(f/2);
					pq.push(f/2 -1);
				}
				k--;
				cerr<<f<<" "<<k<<endl;
			}
			f=pq.top();
			cerr<<f<<" kkkk\n";
			if(f%2)
				printf("Case #%d: %lld %lld\n",f1-t,f/2,f/2);
			else
				printf("Case #%d: %lld %lld\n",f1-t,f/2,f/2-1);
		}
		cerr<<"FFFFFFFFFFFFFF"<<f1-t<<"\n";
	}
}

	
