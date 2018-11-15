#include<bits/stdc++.h>
#define int long long int
#define MOD 1000000007
using namespace std;
int A[201][6001];
main()
{
	int i,j;
	for(i=0;i<=200;i++)
		for(j=0;j<=6000;j++)
			A[i][j]=0;
	for(i=0;i<=200;i++)			A[i][0]=1;
	for(i=0;i<=6000;i++)		A[0][i]=1;
	for	(i=1;i<=200;i++)		// i partitons
	{
		for(j=1;j<=6000;j++)		// j  number
		{
			A[i][j]=(A[i-1][j]+A[i][j-1])%MOD;	
		}
	}
	int T;	cin>>T;
	while(T--)
	{
		/*int al,ar;	cin>>al>>ar;
		int k=ar-al+1,n=0,ans=0;
		n=ar*(ar+1)/2 - al*(al-1)/2;*/
		int n,k;	cin>>n>>k;
		cout<<A[k-1][n]%MOD<<endl;
	}
}
