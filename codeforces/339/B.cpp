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
    ll cnt=0;
    int n,k;
    cin>>n>>k;
    int arr[k];
    loop(k)
    cin>>arr[i];
    cnt=arr[0]-1;
    rep(1,k,i++)
    if(arr[i]<arr[i-1])
        cnt+=arr[i]+(n-arr[i-1]);
    else
        cnt+=arr[i]-arr[i-1];
    cout<<cnt<<endl;
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
