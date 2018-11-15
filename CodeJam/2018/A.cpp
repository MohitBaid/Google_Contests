#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;  cin>>T;
    while(T--)
    {
        int a,b;    cin>>a>>b;
        int n;      cin>>n;
		string s;
        while(1)
        {
         	cerr<<a<<" "<<b<<" "<<(a+b)/2<<endl;
		    cout<<(a+b)/2<<endl;
            cin>>s;
            cerr<<s<<endl;
			if(s[0]=='C'||s[0]=='W')   break;		
            if(s[4]=='B')
            {
                b=(b+a)/2;
            }
            else
            {
                a=(a+b)/2;
            }
            n--;
        }
    }
}
