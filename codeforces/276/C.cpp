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

void solve(){
    int n,q,l,r;
    ll sum =0;
    cin>>n>>q;
    vector<ll> v(n+1);
    vector<ll> p(n+2);
    for(int i=1;i<=n;i++)
    cin>>v[i];
    for(int i=0;i<q;i++)
    {
        cin>>l>>r;
        p[l]++;
        p[r+1]--;
    }
    for(int i=1;i<=n+2;i++)
        p[i]+=p[i-1];
    sort(all(v),greater<int>());
    sort(all(p),greater<int>());
    loop(n+1)
    sum+=v[i]*p[i];
    cout<<sum<<endl;





}
int main()
{
 cin.tie(0);
 cin.sync_with_stdio(0);
/*int t;
cin>>t;
while(t--)*/

  solve();

}
