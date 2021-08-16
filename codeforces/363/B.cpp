#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef long long ll;
#define PB push_back
#define len(s) (int)s.length()
#define sz(v)  (int)v.size()
#define all(v)  v.begin(),v.end()
#define array(arr)  arr,arr+n
#define endl '\n'
#define loop(n) for(int i = 0; i < (n); i++)
#define loop2(n) for(int j = 0; j < (n); j++)
void solve()
{
int n,k,ans=INT_MAX;
cin>>n>>k;
int arr[n+1],presum[n+1]={0};

for(int i=1;i<=n;i++)
{
    cin>>arr[i];
    presum[i]=presum[i-1]+arr[i];
}
for(int i=k;i<=n;i++)
    ans=min(ans,presum[i]-presum[i-k]);
    for(int i=k;i<=n;i++)
        if(presum[i]-presum[i-k]==ans)
    {
        ans=i-k+1;
        break;
    }

cout<<ans<<endl;
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
