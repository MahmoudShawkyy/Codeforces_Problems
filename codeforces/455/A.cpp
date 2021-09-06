#include <bits/stdc++.h>
#include <queue>
using namespace std;
typedef vector<int> vi;
typedef long long ll;
#define pb push_back
#define len(s) (int)s.length()
#define sz(v)  (int)v.size()
#define all(v)  v.begin(),v.end()
#define array(arr)  arr,arr+n
#define endl '\n'
#define rep(k,n,step) for(int i=k;i<n;step)
#define loop(n) for(int i=0;i<n;i++)
void solve()
{
    int mx=100005;
    ll frq[mx]={0},dp[mx]={0};
int n,m;
cin>>n;
loop(n)
{
    cin>>m;
    frq[m]++;
}
dp[0]=0;
dp[1]=frq[1]*1;
rep(2,mx,i++)
{
  dp[i]=frq[i]*i;
  dp[i]=max(dp[i-1],dp[i]+dp[i-2]);
}
cout<<dp[mx-1]<<endl;
}
int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
    int t=1;//cin>>t;
    while(t--)
        solve();

    return 0;
}
