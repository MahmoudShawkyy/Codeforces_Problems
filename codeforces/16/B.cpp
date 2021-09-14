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
int m,n,cnt=0;
ll ans=0;
cin>>m>>n;
vector<pair<int,int>>v;
loop(n){
    int a,b;
cin>>a>>b;
v.pb(make_pair(b,a));
}
sort(all(v));
reverse(all(v));
    loop(n)
    {
        if(cnt+v[i].second<=m)
        {
            cnt+=v[i].second;
            ans+=(v[i].first*v[i].second);
        }else
        {
            int x=cnt+v[i].second-m;
            x=v[i].second-x;
            ans+=(x*v[i].first);
            break;
        }
    }
    cout<<ans<<endl;
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
