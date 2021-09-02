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
int n,k,m,mx,temp;
cin>>n>>k;
int presum[n+1]={0},pre[n+1]={0};
int arr[n+1]={0};
rep(1,n+1,i++)
{
    cin>>arr[i];
    presum[i]=arr[i]+presum[i-1];
}
rep(1,n+1,i++)
{
  cin>>m;
  if(m)
  pre[i]=arr[i]+pre[i-1];
  else
    pre[i]=pre[i-1];
}
ll sum=pre[n];
rep(k,n+1,i++)
{
    mx=max((presum[i]-presum[i-k])-(pre[i]-pre[i-k]),mx);
}
cout<<sum+mx<<endl;
}
int main()
{
    /*cin.tie(0);
    cin.sync_with_stdio(0);
    int t=1;//cin>>t;*/
    //while(t--)
        solve();
    return 0;
}
