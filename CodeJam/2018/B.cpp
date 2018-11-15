#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;	cin>>T;
	for(int y=1;y<=T;y++)
	{
		cout<<"Case #"<<y<<": ";
		set < pair < int,char> > s;
		int n,i,P[n];	cin>>n;
		for(i=0;i<n;i++)	cin>>P[i];
		int m1=0,m2=0,p1,p2;
		for(i=0;i<n;i++)
			if(P[i]>m1)
				m1=P[i],p1=i;
		for(i=0;i<n;i++)
			if(P[i]>m2 && i!=p1)
				m2=P[i],p2=i;		
		int k=m1-m2;
		while(k--)
		{
			cout<<(char)(p1+65)<<" ";
		}
		for(i=0;i<n;i++)
		{
			if(i!=p1 && i!=p2)
			{
				int m=P[i];
				while(m--)
					cout<<(char)(i+65)<<" ";
			}
		}
		while(m2--)
		{
			cout<<(char)(p1+65)<<(char)(p2+65)<<" ";
		}
		cout<<endl;
	}
}
