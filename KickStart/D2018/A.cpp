#include<bits/stdc++.h>
#define int long long int
using namespace std;
int X[5 * 100000 +1];
int S[5 * 100000 +1];
main()
{
	freopen("B-small-attempt0.in","r",stdin);
	freopen("output.txt","w",stdout);
	int T; cin>>T;
	for(int t = 1; t<=T;t++)
	{
		int n,o,d,i;	
		cin>>n>>o>>d;
		int x1,x2,a,b,c,m,L;
		cin>>x1>>x2>>a>>b>>c>>m>>L;
		S[0] = x1 + L;
		S[1] = x2 + L;
		X[0] = x1;
		X[1] = x2;
		for(i=2;i<n;i++)
		{
			X[i] = a*X[i-1] + b*X[i-2] + c;
			X[i] = X[i] % m;
			S[i] = X[i] + L;
		}
		if(1)
		{
			int l = 0,s = 0,odd = 0;
			int ans = -1;
			for(i=0;i<n;i++)
			{
				s+=S[i];
				if(S[i]%2 == 1)
				{
					odd++;
				}
				if(s>d)
				{
					while(s>d)
					{
						s-=S[l];
						if(S[l]%2 == 1)
						{
							odd--;
						}
						l++;
					}
				}
				if(odd>o)
				{
					while(odd>o)
					{
						s-=S[l];
						if(S[l]%2 == 1)
						{
							odd--;
						}
						l++;
					}
				}
				if(s>ans)
				{
					ans = s;
				}
			}
			if(l==n)	ans = -1;
			cout<<"Case #"<<t<<": ";
			if(ans == -1)	cout<<"IMPOSSIBLE"<<endl;
			else			cout<<ans<<endl;
		}
	}
}
