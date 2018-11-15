//https://www.geeksforgeeks.org/bell-numbers-number-of-ways-to-partition-a-set/
#include<bits/stdc++.h>
#define MOD 1000000007
using namespace std;
int power(int a,int b)
{
	if(b==0)	return 1;
	if(b==1)	return a;
	int temp=power(a,b/2);
	if(b%2==0)
	{
		return (temp*temp)%MOD;
	}	
	else
	{
		return (((temp*temp)%MOD)*a)%MOD;
	}
} 
int bellNumber(int n)
{
   int bell[n+1][n+1];
   bell[0][0] = 1;
   for (int i=1; i<=n; i++)
   {
      // Explicitly fill for j = 0
      bell[i][0] = bell[i-1][i-1];
 
      // Fill for remaining values of j
      for (int j=1; j<=i; j++)
         bell[i][j] = bell[i-1][j-1] + bell[i][j-1];
   }
   return bell[n][0];
}
 
// Driver program
int main()
{
   int T,i;	cin>>T;
   while(T--)
   {
   		int n;	cin>>n;
   		int A[i],B[n],bs=0;
   		for(i=0;i<n;i++)
   		{
   			cin>>A[i];
   		}
   		int temp=A[0],size=0;
   		for(i=0;i<n;i++)
   		{
   			temp=__gcd(temp,A[i]);
			if(temp>1)
   			{
   				size++;
   			}
   			else
   			{
   				B[bs++]=size;
				   size=1;
				   temp=A[i];	
   			}
   		}
   		B[bs++]=size;
   		for(i=0;i<bs;i++)
   		{
   			cout<<B[i]<<" ";
   		}
   		cout<<endl;
   }
}
