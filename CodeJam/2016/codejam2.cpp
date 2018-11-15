#include<iostream>
#include<string.h>
using namespace std;
int i=0;
int check(char ch[])
{
	for(int i=0;ch[i]!='\0';i++)
	{
			if(ch[i]!='+')
				return 1;			
	}
		return 0;
}
void flip_happy(char ch[])
{
		for(int i=0;ch[i]=='+';i++)
				ch[i]='-';
	
}
void flip_sad(char ch[])
{
		for(int i=0;ch[i]=='-';i++)
				ch[i]='+';
}
void flip(char ch[])
{
		int j=0;
		while(j!=1)
		{
			int m=check(ch);
			if(m==1)
			{
				i++;
				if(ch[0]=='+')	{		flip_happy(ch);		}
				else			{		flip_sad(ch);		}
			}
			else
			{
				cout<<i;
				i=0;
				j=1;	
			}	
		}
}		
void pancake()
{
	int n;
	cout<<"Enter The Number OF Pancake";
	cin>>n;
	char ch[n];
	scanf("%s",&ch);
	flip(ch);			
}
int main()
{
	int T;
	cout<<"Enter The Value OF T";
	cin>>T;
	for(int i=0;i<T;i++)
	{
			pancake();
	} 
	return 0;
}
