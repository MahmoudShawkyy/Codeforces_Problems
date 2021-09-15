#include <bits/stdc++.h>
#include <queue>
using namespace std;
typedef vector<int> vi;
typedef long long ll;
typedef pair<int,int> PII;
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
    int n;
    cin>>n;
    string s;
    cin>>s;
    if(n%2)
    {
        for(int i=n-2; i>0; i-=2)
            cout<<s[i];
        for(int i=0; i<n; i+=2)
            cout<<s[i];
    }
    else
    {
        for(int i=n-2; i>=0; i-=2)
            cout<<s[i];
        for(int i=1; i<n; i+=2)
            cout<<s[i];
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
