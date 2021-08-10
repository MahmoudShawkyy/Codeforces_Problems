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
int solve()
{
  int n,k,cnt=1;
  cin>>n>>k;
  vector<pair<ll,ll> > v(n);
  loop(n)
  {
      cin>>v[i].first;
      v[i].second=i;
  }
  sort(all(v));
  for(int i=0;i<n-1;i++)
      if(v[i].second+1!=v[i+1].second)
        cnt++;
  if(cnt<=k)
    cout<<"YES\n";
  else
    cout<<"NO\n";
return 0;
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
