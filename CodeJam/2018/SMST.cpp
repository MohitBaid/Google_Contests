#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,q,i;	cin>>n>>q;
	int A[n];	
	for(i=0;i<n;i++)	cin>>A[i];
	while(q--)
	{
		int i1,i2;	cin>>i1>>i2;
		int a=A[i1-1];
		int b=A[i2-1];
		string g;	
		getline(cin,g);
		cout<<g<<endl;
		/*int l=g.size();
		for(i=0;i<g.size();i++)
		{
			if(g[i]=='0')
				l--;
			else
				break;	
		}
		//cout<<a<<" "<<b<<endl;
		int ans=ceil((1.0*l*log10(a))/(1.0*log10(b))) + (g.size()-l);
		//cout<<l<<" "<<1.0*l*log10(a)/log10(b)<<endl;
		cout<<ans<<endl;*/
		/*for(i=0;g[i]!='\0';i++)
			cout<<g[i];
		cout<<endl;*/	
	}
}
