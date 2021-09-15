#include <bits/stdc++.h>
#include <queue>
using namespace std;
typedef vector<int> vi;
typedef long long ll;
typedef pair<int,int> PII;
#define pb push_back
#define len(s) (int)s.length()
#define sz(v)  (int)v.size()
#define all(v)  v.begin(),v.end()
#define array(arr)  arr,arr+n
#define endl '\n'
#define rep(k,n,x) for(int i=k;i<n;i+=x)
#define loop(n) for(int i=0;i<n;i++)
#define loop2(m) for(int j=0;j<m;j++)
void solve()
{
    int n,m;
    cin>>n;
    int arr[100005];
    loop(n)
    {
        cin>>m;
        arr[m]=i+1;
    }
    ll a=0,b=0,x;
    cin>>m;
    loop(m)
    {
        cin>>x;
        a+=arr[x];
        b+=n-arr[x]+1;
    }
    cout<<a<<" "<<b<<endl;
}
int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
    int t=1;
    //cin>>t;
    while(t--)
        solve();

    return 0;
}
