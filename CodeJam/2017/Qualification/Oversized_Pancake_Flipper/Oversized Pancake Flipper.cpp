#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("A-large.in","r",stdin);
	freopen("out.txt","w",stdout);
	int t,k,i,l,j;	cin>>t;
	int f=t;
	while(t--)
	{
		char ch[1001];
		int ans=0,flag=1;
		cin>>ch;
		cin>>k;
		for(l=0;ch[l]!='\0';l++);
		for(i=0;i<l-k+1;i++)
		{
			if(ch[i]=='-')
			{
				ans++;
				for(j=i;j<i+k;j++)
					if(ch[j]=='-')
						ch[j]='+';
					else
						ch[j]='-';				
			}
			//printf("%s\n",ch);	
		}
		for(i=0;i<l;i++)
		{
			if(ch[i]=='-')
			{
				flag=0;
				break;
			}
		}
		if(flag)
			printf("Case #%d: %d\n",f-t,ans);
		else
			printf("Case #%d: IMPOSSIBLE\n",f-t,ans);
	}
}
