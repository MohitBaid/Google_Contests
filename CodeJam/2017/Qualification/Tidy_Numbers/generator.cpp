#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("in.txt","w",stdout);
	int t;	cin>>t;
	cout<<t<<endl;
	int i;
	srand(time(NULL));
	for(i=0;i<t;i++)
	{
		int t=rand()%1000 +1;
		cout<<t<<endl;
	}
}
