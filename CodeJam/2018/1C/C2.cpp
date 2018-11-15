#include<bits/stdc++.h>
#define int long long int
using namespace std;
int lis( int arr[], int n )
{
    int *lis, i, j, max = 0;
    lis = (int*) malloc ( sizeof( int ) * n );
    for (i = 0; i < n; i++ )
        lis[i] = 1;
    for (i = 1; i < n; i++ )
        for (j = 0; j < i; j++ ) 
            if ( arr[i] > arr[j] && arr[i]<=1LL*6*arr[j] && lis[i] < lis[j] + 1)
                lis[i] = lis[j] + 1;
    for (i = 0; i < n; i++ )
        if (max < lis[i])
            max = lis[i];
 
    free(lis);
 
    return max;
}
main()
{
    int T,i,j,k,t;	cin>>T;
	for(t=1;t<=T;t++)
	{
		int n;	cin>>n;
		int A[n],B[n],C[n];
		for(i=0;i<n;i++)	cin>>A[i],B[i]=A[i],C[i]=1;
		B[0]=A[0];
		C[0]=1;
		cout<<"Case #"<<t<<": "<<lis(A,n)<<endl;
 	 }
}
