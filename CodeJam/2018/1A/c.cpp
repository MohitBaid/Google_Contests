#include<bits/stdc++.h>
#define int long long int
using namespace std;
main()
{
	int T,t,i,j;	cin>>T;
	for(t=1;t<=T;t++)
	{
		int n,p;	cin>>n>>p;
		int w,h;
		set < float > s;
		for(i=0;i<n;i++)
		{
			cin>>w>>h;
		}
		float pc=2.0*(w+h);
		pc=p-(n*pc);
		float ans=pc;
		for(i=1;i<=n;i++)
		{
			float l=pc/i;
			if(l<=(2.0 *sqrt(h*h + w*w)))
			{
				float l1=sqrt ( (l*l/4.0) - h*h);
				float l2=sqrt ( (l*l/4.0) - w*w);
				//cout<<l1<<" "<<l2<<" "<<i<<endl;
				float tmp=0.0;
				float ans1=pc;
				for(j=0;j<=i;j++)
				{
					tmp=j*(l1 + l1) + (i-j)*(l2 +l2);
					tmp=pc-2*tmp;
					//cout << tmp<< " "<<j<<endl;
					//if(tmp < 0.0)	tmp=0.0;
					ans1=min(ans1,tmp);
				}
				ans=min(ans,ans1);
			}
		}
		cout<<"Case #"<<t<<": "<< p*1.0 - ans<<endl;
	}
	
}
