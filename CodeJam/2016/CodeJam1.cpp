#include<iostream>
int arr[10]={-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};
void assig(int N)
{
	int t;
	while(N!=0)
	{
		t=N%10;
		arr[t]=t;
		N=N/10;
	}	
}
int check(int N)
{
	assig(N);
	for(int i=0;i<10;i++)
	{
			if(arr[i]!=i)
					return 1;			
	}
		return 0;
}
void sheep(int N)
{
	int m,i=0;int M=N;
	if(N==0)
	{
			printf("INSOMNIA");
			i=1;
	}

	while(i!=1)
	{
		m=check(M);
		if(m==0)
			{
				printf("%d\n",M);
				i=1;
				for(int i=0;i<10;i++)
							arr[i]=-1;		
			}
		else
			{
				M=M+N;
			}			
	}
}		
int main()
{
	int n;int N;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
			scanf("%d",&N);
			printf("case#%d:\n",i+1);
			sheep(N);
	}
	return 0;
}
