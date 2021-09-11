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
#define loop2(m) for(int j=0;j<m;j++)
void solve()
{
    vi v;
    int n,ans=INT_MAX;
    cin>>n;
    string s;
    cin>>s;
    int arr[n];
    loop(n)
    cin>>arr[i];
    loop(n)
    if(s[i]=='R'&&s[i+1]=='L')
    {
        v.pb(arr[i]);
        v.pb(arr[i+1]);
    }
    if(!sz(v))
        cout<<-1<<endl;
    else
    {
        rep(0,sz(v),2)
        {
            int temp = (v[i]+v[i+1])/2-v[i];
            ans=min(temp,ans);
        }
        cout<<ans<<endl;
    }

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
