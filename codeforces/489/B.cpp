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
int n,m,ans=0;
cin>>n;
int boys[n];
loop(n)
cin>>boys[i];
sort(boys,boys+n);
cin>>m;
int girls[m];
loop(m)
cin>>girls[i];
sort(girls,girls+m);
loop(n)
loop2(m)
 if((abs(boys[i]-girls[j]))<2)
 {
     girls[j]=100000;
     ans++;
    break;
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
