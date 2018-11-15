#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;	cin>>T;
	for(int t=1;t<=T;t++)
	{
		double x;	cin>>x;
		double a=asin((x*x - 1.000000000001))/2.0;
		cout<<"Case #"<<t<<": "<<endl;
		cout<<setprecision(12)<<fixed<<0.5*cos(a)<<" "<<0.5*sin(a)<<" 0"<<endl;
		cout<<setprecision(12)<<fixed<<0.5*sin(a)<<" "<<-1*0.5*cos(a)<<" 0"<<endl;
		cout<<"0 0 0.5"<<endl;
	}
}
