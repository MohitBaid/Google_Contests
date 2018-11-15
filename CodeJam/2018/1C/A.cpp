#include<bits/stdc++.h>
using namespace std;
set < string > f,temp;
set < string > :: iterator ft,st;
void gen(string s, string prefix, int n, int k)
{
     
    if (k == 0) 
    {
     	f.insert(prefix);
        return;
    }
    for (int i = 0; i < n; ++i)
    {
        string newPrefix = prefix + s[i]; 
        gen(s, newPrefix,  n, k - 1); 
    }
}
int main()
{
	int T,i,j;	cin>>T;
	for(int t=1;t<=T;t++)
	{
		int n,size;	cin>>n>>size;
		string s="";
		map < char ,int > mp;
		set < string  > se;
		for(i=0;i<n;i++)
		{
			string t;	cin>>t;
			se.insert(t);
			for(j=0;j<t.size();j++)
				mp[t[j]]++;
		}
		string tr="";
		f.insert(tr);
		//cout<<f.size()<<endl;
		for(i=0;i<size;i++)
		{
			for(ft=f.begin();ft!=f.end();ft++)
			{
				string t=*ft;
				for(st=se.begin();st!=se.end();st++)
				{
					string te=*st;
					string g=t+te[i];
					temp.insert(g);
				}
			}
			f.clear();
			for(ft=temp.begin();ft!=temp.end();ft++)
			{
				f.insert(*ft);
			}
			temp.clear();
		}
		string ans="-";
		for(ft=f.begin();ft!=f.end();ft++)
		{
			if(se.find(*ft)==se.end())
			{
				ans=*ft;
				break;
			}
		}
		cout<<"Case #"<<t<<": "<<ans<<endl;
		f.clear();
		temp.clear();
		se.clear();
	}
}
