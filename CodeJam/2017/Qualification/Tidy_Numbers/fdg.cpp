#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	freopen("B-large.in","r",stdin);
	freopen("out.txt","w",stdout);
	int t,tc=1;
	cin>>t;
	for(tc=1;tc<=t;tc++)
	{
		long long n,copy;
		cin>>n;
		copy=n;
		
		int dctr=log10(n)+1;
		int arr[200]={0};
		int j=dctr-1,d,i;
		while(n>0)
		{
			d=n%10;
			n/=10;
			arr[j]=d;
			j--;
		}
		for(i=dctr-1;i>0;i--)
		{
			if(arr[i-1]>arr[i])
				{
					arr[i-1]--;
					for(j=i;j<dctr;j++)
					   arr[j]=9;
				}
		}
		long long ans=0,pw=1;
		for(i=dctr-1;i>=0;i--)
		{
			ans+=(arr[i]*pw);
			pw*=10;
		}
		cout<<"Case #"<<tc<<": "<<ans<<endl;
		
	}
}
