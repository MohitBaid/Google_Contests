#include <bits/stdc++.h>
#define loop(i,a,b) for(int i=a;i<b;i++)
#define int long long int
using namespace std;
 
const int N=1e4+1;
int a[N];
int lastreach[N];
int t[2 * N];
int n;
void build() { 
    // build the tree
    loop(i,0,n) t[i+n]=a[i];
  for (int i = n - 1; i > 0; --i) t[i] = __gcd(t[i<<1],t[i<<1|1]);
}
 
 
 
int query(int l, int r) {  // sum on interval [l, r)
  int res = 0;
  for (l += n, r += n; l < r; l >>= 1, r >>= 1) {
    if (l&1) res= __gcd(res,t[l++]);
    if (r&1) res= __gcd(res,t[--r]);
  }
  return res;
}
 
int f(int x)
{
    int lo=0,hi=x;
    if(query(lo,x+1)>1) return lo;
    while(lo<hi-1)
    {
        int mid=(lo+hi)/2;
        if(query(mid,x+1)>1)hi=mid;
        else lo=mid;
    }
    return hi;
}
 
 
 
int tree[2 * N];
 
 
 
void update(int p, int value) {  // set value at position p
  for (tree[p += n] = value; p > 1; p >>= 1) tree[p>>1] = tree[p] + tree[p^1];
}
 
int ans(int l, int r) {  // sum on interval [l, r)
  int res = 0;
  for (l += n, r += n; l < r; l >>= 1, r >>= 1) {
    if (l&1) res += tree[l++];
    if (r&1) res += tree[--r];
  }
  return res;
}
 
 
 
 
 
#undef int
int main() {
#define int long long int
	// your code goes here
 
int test;
cin>>test;
while(test--)
{
    memset(t,0,sizeof(t));
    cin>>n;
    loop(i,0,n) cin>>a[i];
    build();
    lastreach[0]=0;
    loop(i,1,n)
    {
        lastreach[i]=f(i);
    }
 
    int dp[n+1];
    dp[0]=1;
 
    memset(tree,0,sizeof(tree));
    update(0,1);
    loop(i,1,n+1)
    {
        int l=lastreach[i-1];
        int currans=ans(l,i);
        dp[i]=currans;
        update(i,dp[i]);
 
    }
 
    cout<<dp[n]<<"\n";
 
}
}
 
