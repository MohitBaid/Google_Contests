#include<bits/stdc++.h>
#define int long long int
using namespace std;
main()
{
	freopen("B-small-attempt2.in","r",stdin);
	freopen("output.txt","w",stdout);
	int T;	cin>>T;
	for(int t=1;t<=T;t++)
	{
		int n,k,i,j;	cin>>n>>k;
		
		int p1,p2,a1,b1,c1,m1;	cin>>p1>>p2>>a1>>b1>>c1>>m1;
		int h1,h2,a2,b2,c2,m2;	cin>>h1>>h2>>a2>>b2>>c2>>m2;
		int x1,x2,a3,b3,c3,m3;	cin>>x1>>x2>>a3>>b3>>c3>>m3;
		int y1,y2,a4,b4,c4,m4;	cin>>y1>>y2>>a4>>b4>>c4>>m4;
		
		int P[n],H[n],X[k],Y[k];
		P[0] = p1;		H[0] = h1;		X[0] = x1;		Y[0] = y1;
		P[1] = p2;		H[1] = h2;		X[1] = x2;		Y[1] = y2;
		for(i=2;i<n;i++)
		{
			P[i] =a1 * P[i-1] + b1 * P[i-2] + c1;
			P[i] = P[i]%m1 +1;
			
			H[i] =a2 * H[i-1] + b2 * H[i-2] + c2;
			H[i] = H[i]%m2 +1;
		}
		for(i=2;i<k;i++)
		{
			X[i] =a3 * X[i-1] + b3 * X[i-2] + c3;
			X[i] = X[i]%m3 +1;
			
			Y[i] =a4 * Y[i-1] + b4 * Y[i-2] + c4;
			Y[i] = Y[i]%m4 +1;
		}
		int ans = 0;
		for(i=0;i<n;i++)
		{
			for(j=0;j<n-1;j++)
			{
				if(P[j]>P[j+1])
				{
					int t = P[j];
					P[j] = P[j+1];
					P[j+1] = t;
					
					t = H[j];
					H[j] = H[j+1];
					H[j+1] = t;
				}
			}
		}
		for(i=0;i<k;i++)
		{
			int lef=-1,rig=-1,j=0;
			for(j=0;j<n;j++)
			{
				if(X[i]<P[j])
					break;
			}
		
			int tlef = j-1;
			for(;tlef>=0;tlef--)
			{
				if(Y[i]<=H[tlef] && H[tlef]-Y[i]>=X[i]-P[tlef])
					break;
			}
			if(tlef != -1)
				lef = tlef;
			
			int trig = j;	
			for(;trig<n;trig++)
			{
				if(Y[i]<=H[trig]&& H[trig]-Y[i]>=P[trig]-X[i])
					break;
			}
			if(trig != n)
				rig = trig;
			
			if(rig!=-1)			ans++;
			else if(lef!=-1)	ans++;
		}
		cout<<"Case #"<<t<<": ";
		cout<<ans<<endl;
	}
}
