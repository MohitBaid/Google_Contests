#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;	cin>>T;
	while(T--)
	{
		//cerr<<"Next Case"<<endl;
		int A;	cin>>A;
		int B[3][100]={0};
		int n=1000;
		int a=500+1,b=500+1;
		while(n--)
		{
			int i,j;
			cout<<a<<" "<<b<<endl;
			fflush(stdout);
			//cerr<<a<<" "<<b<<" : ";
			cin>>i>>j;
			//cerr<<i<<" "<<j<<"\n";
			if(i==0)	break;
			if(i==-1)	break;
			B[i-500][j-500]=1;
			a=a-500;
			b=b-500;
			if(B[a][b-1]==1 &&B[a-1][b-1]==1  &&B[a+1][b-1]==1)
			{
				b++;
			}
			a=a+500;
			b=b+500;
		}
	}
}
