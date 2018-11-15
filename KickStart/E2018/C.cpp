#include<bits/stdc++.h>
using namespace std;
int c = 0;
vector < vector < int > > v,t;
vector < vector < vector < int > > > com;
vector < int > v1,v2,v3;
vector < vector < int > > v4;
void combinationUtil(int arr[],int n,int r,int index,int data[],int i);
void printCombination(int arr[], int n, int r)
{
    int data[r];
    combinationUtil(arr, n, r, 0, data, 0);
}
void combinationUtil(int arr[], int n, int r, int index, int data[], int i)
{
    // Current cobination is ready, print it
    if (index == r)
    {
		vector < int > vt;
		for (int j=0; j<r; j++)
            vt.push_back(data[j]);
        v.push_back(vt);    
		return;
    }
    if (i >= n)
        return;
        
    data[index] = arr[i];
    combinationUtil(arr, n, r, index+1, data, i+1);
    combinationUtil(arr, n, r, index, data, i+1);
}
int main()
{
	int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9},i,j;
    printCombination(arr,9,3);
    set < vector < int >  > done;
    for(i=0;i<v.size();i++)
    {
    	t.push_back(v[i]);
    }
    v.clear();
	for(i=0;i<t.size();i++)
 	{
		 int in[10]={0};
		 for(j=0;j<=9;j++)
		 {
		 	in[j]=1;	
		 }
		 for(j=0;j<t[i].size();j++)		in[t[i][j]]=0;
		 int p=0;
		 for(j=1;j<=9;j++)
		 {
		 	if(in[j]==1)
		 		arr[p++]=j;
		 }	
		 //cout<<"Calling For :";
		 //for(j=0;j<6;j++)	cout<<arr[j]<<" " ;	cout<<endl;
		 printCombination(arr,6,3);	
		 for(int k=0;k<v.size();k++)
		 {
			if(done.find(v[k]) == done.end())
			{
				v1.clear(),v2.clear(),v3.clear(),v4.clear();
				for(j=0;j<t[i].size();j++)	v1.push_back(t[i][j]);					
			 	for(j=0;j<v[i].size();j++)	in[v[k][j]]=0,v2.push_back(v[k][j]);		
			 	for(j=1;j<=9;j++)    if(in[j]==1)	v3.push_back(j);					
			 	for(j=0;j<v[i].size();j++)	in[v[k][j]]=1;
			 	
			 	if(done.find(v3) == done.end())
			 	{
				 	v4.push_back(v1);
				 	v4.push_back(v2);
				 	v4.push_back(v3);
				 	com.push_back(v4);
				}
			}
		 }
		v.clear();
		done.insert(t[i]);
	 }
	int T;	cin>>T;
	for(int t=1;t<=T;t++)
	{
		int n,i;	cin>>n;
		int A[3*n],B[3*n];
		for(i=0;i<3*n;i++)	cin>>A[i];
		for(i=0;i<3*n;i++)	cin>>B[i];
		
		int P1[560][3],P2[560][3];
		for(i=0;i<com.size();i++)
		 {
		 	for(j=0;j<3;j++)
		 	{
		 		int temp = 0;
				for(int k=0;k<3;k++)	
		 			temp+=A[com[i][j][k]-1];
				P1[i][j]=temp;
			}
		 }
		
		for(i=0;i<com.size();i++)
		 {
		 	for(j=0;j<3;j++)
		 	{
		 		int temp = 0;
				for(int k=0;k<3;k++)	
		 			temp+=B[com[i][j][k]-1];
				P2[i][j]=temp;
			}
		 }
		
		int won = 0;
		for(i=0;i<560;i++)
		{
			for(j=0;j<560;j++)
			{
				int k = 0,c=0;
				for(st=s.begin();st!=s.end();st++)
				{
					if(k<=2)
					{
						if(st->second == 2)
							c++;
					}
					else
					{
						break;
					}
					k++;
				}
				if(c>=2)	
				{
					won++;
					break;
				}
				s.clear();
			}
		}
		cout<<won<<endl;
	}
}
