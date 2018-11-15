#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;	cin>>T;
	for(int t=1;t<=T;t++)
	{
		int n,l,i,sum=0;	cin>>n>>l;
		int C[l];
		for(i=0;i<l;i++)	cin>>C[i];
		double A[l];
		set < double > s;
		set < double > :: iterator it;
		for(i=0;i<l;i++)	A[i]=(C[i]*1.0/n)*100,sum+=C[i];
		int ans=0,c1=0,c2=0;
		for(i=0;i<l;i++)
		{
			double k = A[i]-(int)A[i];
			if(k!=0.0)
			{
				if(k<0.5)	c1++,s.insert(k*-1.0);
				else 		c2++;
			}
		}
		sum=n-sum;
		for(it=s.begin();it!=s.end();it++)
		{
			double k= *it * -1;
			k = 0.5 - k;
			k=k*n;
			if(sum>=ceil(k))
			{
				sum-=ceil(k);
				c1--;
				c2++;
			}
		}
		if(sum)
		{
			for(i=1;i<=sum;i++)
			{
				double k = (0i*1.0/n ) *100;
				k = k - (int)k;
				
			}
		}
		if(c2==0 && c1>0)	cout<<"99"<<endl;
		else if(c2>1)		cout<<"101"<<endl;
		else				cout<<"100"<<endl;
	}
}
