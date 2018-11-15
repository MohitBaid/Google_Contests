#include<bits/stdc++.h>
using namespace std;
set < string > s;
set < string > :: iterator it;
void pop(int p,string a)
{
	if(a.size()== p)
	{
		s.insert(a);
	}
	else
	{
		pop(p,a+'0');
		pop(p,a+'1');
	}
}
int main()
{
	freopen("B-small-attempt0.in","r",stdin);
	freopen("output.txt","w",stdout);
	int T;	cin>>T;
	for(int t = 1;t<=T;t++)
	{
		s.clear();
		int n,m,p,i,j;	cin>>n>>m>>p;
		string pre[n],fo[m];
		for(i=0;i<n;i++)	cin>>pre[i];
		for(i=0;i<m;i++)	cin>>fo[i];
		pop(p,"");
		//for(it=s.begin();it!=s.end();it++)	cout<<(*it)<<endl;
		int min=p*n +1;	string ans="";
		for(it=s.begin();it!=s.end();it++)
		{
			int pr = 0,temp=0;
			string g=*it;
			for(i=0;i<m;i++)
			{
				if(g.compare(fo[i])==0)
				{
					pr = 1;
					break;
				}
			}
			if(pr == 0)
			{
				for(i=0;i<n;i++)
				{
					for(j=0;j<p;j++)
					{
						if(g[j] != pre[i][j])	
							temp++;
					}
				}
				if(temp<min)
				{
					min = temp;
					ans = g;
				}
			}	
		}
		cout<<"Case #"<<t<<": "<<min<<endl;		
	}
}
