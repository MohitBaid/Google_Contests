#include<bits/stdc++.h>
using namespace std;
int main()
{
	//freopen("in.txt","r",stdin);
	freopen("A-small-attempt0.in","r",stdin);
	//freopen("A-small-1-attempt0.in","r",stdin);
	//freopen("A-small-1-attempt0.in","r",stdin);
	freopen("A-small-attempt0.txt","w",stdout);
	int T,i,j;	cin>>T;
	int f=T;
	while(T--)
	{
		int r,c;	cin>>r>>c;
		cout<<r<<" "<<c<<endl;
		int i;
		char ch[r+1][c+1];
		for(i=0;i<r;i++)
		{
			scanf("%s",ch[i]);
		}
		/*char cg[r];
		int flag;
		for(i=0;i<r;i++)
		{
			for(j=0;j<c;j++)
			{
				flag=0;
				if(ch[i][j]!='?')
				{
					cg[i]=ch[i][j];
					flag=1;
					break;
				}
			}
			if(flag)
				cg[i]=ch[i][j];
		}
		//printf("%s ----\n",cg);	
		for(i=0;i<r;i++)
		{
			for(j=0;j<c;j++)
			{
				if(ch[i][j]=='?')
				{
					ch[i][j]=cg[i];
				}
				cg[j]=ch[i][j];
			}
		}
		printf("Case #%d:\n",f-T);*/
		for(i=0;i<r;i++)
		{
			printf("%s\n",ch[i]);
		}
		
	}
	
}
