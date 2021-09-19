#include <bits/stdc++.h>
#include <queue>
using namespace std;
typedef vector<int> vi;
typedef long long ll;
typedef pair<int,int> PII;
#define PB push_back
#define len(s) (int)s.length()
#define sz(v)  (int)v.size()
#define all(v)  v.begin(),v.end()
#define array(arr)  arr,arr+n
#define endl '\n'
#define rep(k,n,x) for(int i=k;i<n;i+=x)
#define loop(n) for(int i=0;i<n;i++)
#define loop2(m) for(int j=0;j<m;j++)
int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
    int t=1;
    // cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        ll base[n],doubled[n],product[n],clients[n];
        loop(n)
        {
            ll a,b;
            cin>>a>>b;
            product[i]=a;
            clients[i]=b;
            base[i]=min(a,b);
            a*=2;
            doubled[i]=min(a,b);

        }
        vector<pair<ll,int>>v;
        loop(n)
           v.PB(make_pair((doubled[i]-base[i]),i));
        sort(all(v));
        ll ans=0;
        int it=sz(v)-1;
        loop(k)
        {

            product[v[it].second]*=2;
            it--;
        }
        loop(n)
        ans+=(min(product[i],clients[i]));
        cout<<ans<<endl;
    }
    return 0;
}
