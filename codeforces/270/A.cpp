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
#define rep(k,n,x) for(int i=k;i<n;i+=x)
#define loop(n) for(int i=0;i<n;i++)
void solve()
{
int n;
cin>>n;
if(360%(180-n)==0)
    cout<<"YES\n";
else
    cout<<"NO\n";
}
int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
    int t=1;cin>>t;
    while(t--)
        solve();

    return 0;
}
