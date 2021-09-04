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
bool isPrime(ll x)
{
    if(x==1)
        return false;
    else if(x==2||x==3)
        return true;
        else
            for(ll i=2;i*i<=x;i++)
              if(x%i==0)
                return false;
        return true;

}
void solve()
{
ll n,m;
cin>>n;
loop(n)
{
    cin>>m;
    ll r=sqrt(m);
    if(r*r==m&&isPrime(r))
        cout<<"YES\n";
    else
        cout<<"NO\n";

}
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
