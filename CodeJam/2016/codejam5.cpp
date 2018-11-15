#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
int main()
{
	int T,n;
	ifstream fin("Input.txt",ios::in);
	ofstream fout("Output.txt",ios::out);
	fin>>T;
	for(int i=1;i<=T;i++)
	{
		fin>>n;int k;
		int a=0;
		int m1[n];
		int m2[n];
		for(int j=0;j<n;j++)	{	m1[j]=0;	m2[j]=0;	}	
		char ch1[n][50];
		char ch2[n][50];
		char ch[100];
		for(int j=0;j<n;j++)
		{
			fin>>ch;
			for(k=0;ch[k]!=' ';k++)
			{
				ch1[j][k]=ch[k];
			}
			for(int m=k-1;ch[m]!='\0';m++)
			{
				ch2[j][m-k-1]=ch[m];
			}		
			puts(ch1[j]);
			puts(ch2[j]);	
		}
		for(int j=0;j<n;j++)		
		{
			for(int k=0;k<n;k++)
			{
				if(strcmp(ch1[j],ch1[k])==0)
					m1[j]=1;
				if(strcmp(ch2[j],ch2[k])==0)
					m2[j]=1;	
			}	
		}
		for(int j=0;j<n;j++)
		{
			cout<<i<<"        "<<m1[j]<<"\t"<<m2[j]<<endl;
		}
		for(int j=0;j<n;j++)
		{	
			if(m1[j]==1&&m2[j]==1)
				a++;
		}	
		fout<<"Case #"<<i<<": "<<a<<endl;
	}		
}
