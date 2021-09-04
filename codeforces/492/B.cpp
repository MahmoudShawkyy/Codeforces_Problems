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
    int n,k,m,cnt=0;
    double ans=0;
    cin>>n>>k;
    double arr[n];
    loop(n)
    cin>>arr[i];
    sort(array(arr));
    ans=max(arr[0],ans);
    double temp = k-arr[n-1];
    ans=max(ans,temp);
    for(int i=n-1;i>0;i--)
    {
        temp=(double)(arr[i]-arr[i-1])/2;
        ans=max(ans,temp);
    }
    cout<<setprecision(6)<<fixed<<ans<<endl;
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
