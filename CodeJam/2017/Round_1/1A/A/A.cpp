#include<bits/stdc++.h>
using namespace std;
/*void fill(char ch[][25])
{
	for(i=0;i<r;i++)
	
}*/
int main()
{
	//freopen("in.txt","r",stdin);
	freopen("A-large.in","r",stdin);
	//freopen("A-small-1-attempt0.in","r",stdin);
	//freopen("A-small-1-attempt0.in","r",stdin);
	freopen("out2.txt","w",stdout);
	int T,i,j;	cin>>T;
	int f=T;
	while(T--)
	{
		int r,c;	cin>>r>>c;
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
			if(!flag)
				cg[i]=ch[i][j-1];
		}*/
		//printf("%s ----\n",cg);	
		for(i=0;i<r;i++)
		{
			for(j=0;j<c;j++)
			{
				if(ch[i][j]=='?')
				{
					if(j!=c-1 &&ch[i][j+1]!='?')
						ch[i][j]=ch[i][j+1];
					else if(j!=0 &&ch[i][j-1]!='?')
						ch[i][j]=ch[i][j-1];		
				}
				//cg[j]=ch[i][j];
			}
		}
		for(i=r-1;i>=0;i--)
		{
			for(j=c-1;j>=0;j--)
			{
				if(ch[i][j]=='?')
				{
					if(j!=c-1 &&ch[i][j+1]!='?')
						ch[i][j]=ch[i][j+1];
					else if(j!=0 &&ch[i][j-1]!='?')
						ch[i][j]=ch[i][j-1];				
				}
			}
		}
		for(i=0;i<r;i++)
		{
			for(j=0;j<c;j++)
			{
				if(ch[i][j]=='?')
				{
					if(i!=0 &&ch[i-1][j]!='?')
						ch[i][j]=ch[i-1][j];
					else if(i!=r-1 &&ch[i+1][j]!='?')
						ch[i][j]=ch[i+1][j];		
				}
				//cg[j]=ch[i][j];
			}
		}
		for(i=r-1;i>=0;i--)
		{
			for(j=c-1;j>=0;j--)
			{
				if(ch[i][j]=='?')
				{
					if(i!=0 &&ch[i-1][j]!='?')
						ch[i][j]=ch[i-1][j];
					else if(i!=r-1 &&ch[i+1][j]!='?')
						ch[i][j]=ch[i+1][j];		
				}
				//cg[j]=ch[i][j];
			}
		}
		printf("Case #%d:\n",f-T);
		for(i=0;i<r;i++)
		{
			printf("%s\n",ch[i]);
		}
		
	}
	
}
