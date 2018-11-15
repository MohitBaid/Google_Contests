#include<bits/stdc++.h>
using namespace std;
#define PI 3.141592653589793238462643383279502884197169
struct pancake
{
	int r;
	int h;
};
bool operator<(const pancake& a, const pancake& b)
{
  int m=a.r + a.h;
  int n=b.r + b.h;
  /*if(m==n)
  {
  		return a.r <b.r;
  }*/
  return m < n;
}

int main()
{
	//freopen("in.txt","r",stdin);
	freopen("A-small-attempt3.in","r",stdin);
	//freopen("A-small-1-attempt0.in","r",stdin);
	freopen("out.txt","w",stdout);
	int T;	cin>>T;
	int f=T;
	while(T--)
	{
			int n,i,k,r=0;	cin>>n>>k;
			struct pancake p[n],temp,prev;
			priority_queue<pancake> pq;
			for(i=0;i<n;i++)
			{
				cin>>p[i].r>>p[i].h;
				pq.push(p[i]);
			}	
			long double ans=0.0;
			temp=pq.top();
			cerr<<ans<<endl;
			while(k--)
			{
				temp=pq.top();
				pq.pop();
				ans+=(2*PI*temp.r*temp.h);
				if(r<temp.r)
					r=temp.r;
			}
			ans+=PI*r*r ;
			cout<<setprecision(10)<<fixed<<"Case #"<<f-T<<": "<<ans<<endl;
	}	
}
