#include <bits/stdc++.h>
#include <queue>
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
int n,m,ans=0,i=0;
cin>>n>>m;
int arr[n];
vi v;
loop(n)
{
    cin>>arr[i];
    if(arr[i]<0)
     v.PB(abs(arr[i]));
}
sort(all(v),greater<int>());
while(m--&&i<sz(v))
{
    ans+=v[i];
    i++;
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
