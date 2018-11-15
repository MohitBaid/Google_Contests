#include<iostream>
using namespace std;
void tile()
{
	int K,C,S;
	cout<<"Enter The  Value OF K,C And S";
	cin>>K>>C>>S;
	if(C==1&&S<K)
		cout<<"IMPOSSIBLE"<<endl;
	if(C==1&&S==K)
		{
			for(int i=0;i<K;i++)
					cout<<i;	
		}	
	else
		{
			int i=0;
			while(i!=K-1)
			{
					cout<<((i*K)+(i+2));
					i++;
			}	
		}		
			 	
}
int main()
{
	int T;
	cout<<"Enter The Number Of Test Cases";
	cin>>T;
	for(int i=0;i<T;i++)
	{
			tile();
			cout<<"Case#"<<i+1<<":";
	}
}
