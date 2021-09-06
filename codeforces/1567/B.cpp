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
 int n,m,ans=0;
 cin>>n>>m;
 ans=n;
 int x=n-1;
 if(x%4==1)
   x=1;
 else if(x%4==2)
    x++;
 else if(x%4==3)
    x=0;

 if(x==m)
    cout<<ans<<endl;
 else if((x^m)==n)
   cout<<ans+2<<endl;
 else
    cout<<++ans<<endl;
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
