#include<bits/stdc++.h>
#define int long long int
using namespace std;
main()
{
	int T,t;	cin>>T;
	for(t=1;t<=T;t++)
	{
		int r,b,c,i,j,k,l,z;	cin>>r>>b>>c;
		int M[c],S[c],P[c];
		for(i=0;i<c;i++)
		{
			cin>>M[i]>>S[i]>>P[i];
			M[i]=min(M[i],b);
		}
		int B[10][100];
		for(i=0;i<c;i++)
			for(j=0;j<=M[i];j++)
			{
				if(j!=0)	B[i][j]=S[i]*j + P[i];
				else		B[i][j]=0;
			}
		int ans=100000000000000000;
		if(c==1)
		{
			for(i=0;i<=M[0];i++)
			{
				int co=0;
				if(i==0)	co++;
				if(i==b && (c-co) <=r)
					ans=B[0][i];
			}
		}
		if(c==2)
		{
			for(i=0;i<=M[0];i++)
			{
				for(j=0;j<=M[1];j++)
				{
					int co=0;
					if(i==0)	co++;
					if(j==0)	co++;
					if(i+j==b && (c-co)<=r)
						ans=min(max(B[0][i],B[1][j]),ans);
				}
			}
		}
		if(c==3)
		{
			for(i=0;i<=M[0];i++)
			{
				for(j=0;j<=M[1];j++)
				{
					for(k=0;k<=M[2];k++)
					{
						int co=0;
						if(i==0)	co++;
						if(j==0)	co++;
						if(k==0)	co++;
						if(i+j+k==b && (c-co)<=r)
						{
							ans=min(max(max(B[0][i],B[1][j]),B[2][k]),ans);
						}
					}
				}
			}
		}
		if(c==4)
		{
			
			for(i=0;i<=M[0];i++)
			{
				for(j=0;j<=M[1];j++)
				{
					for(k=0;k<=M[2];k++)
					{
						for(l=0;l<=M[3];l++)
						{
							int co=0;
							if(i==0)	co++;
							if(j==0)	co++;
							if(k==0)	co++;
							if(l==0)	co++;
							if(i+j+k+l==b && (c-co)<=r)
							{
								ans=min(max(max(max(B[0][i],B[1][j]),B[2][k]),B[3][l]),ans);
							}
						}
					}
				}
			}
		}
		if(c==5)
		{
			for(i=0;i<=M[0];i++)
			{
				for(j=0;j<=M[1];j++)
				{
					for(k=0;k<=M[2];k++)
					{
						for(l=0;l<=M[3];l++)
						{
							for(z=0;z<=M[4];z++)
							{
								int co=0;
								if(i==0)	co++;
								if(j==0)	co++;
								if(k==0)	co++;
								if(l==0)	co++;
								if(z==0)	co++;
								if(i+j+k+l+z==b && (c-co)<=r)
								{
									/*cout<<i<<"("<<B[0][i]<<") ";
									cout<<j<<"("<<B[1][j]<<") ";
									cout<<k<<"("<<B[2][k]<<") ";
									cout<<l<<"("<<B[3][l]<<") ";
									cout<<z<<"("<<B[4][z]<<") ";*/
									ans=min(max(max(max(max(B[0][i],B[1][j]),B[2][k]),B[3][l]),B[4][z]),ans);
									//cout<<ans<<endl;
								}
							}
						}
					}
				}
			}
		}
		cout<<"Case #"<<t<<": "<<ans<<endl;;
	}
}
