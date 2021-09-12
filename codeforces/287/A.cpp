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
int solve()
{
 char arr[4][4];
 int cnt=0;
loop(4)
loop2(4)
cin>>arr[i][j];
loop(3)
loop2(3)
{   cnt=0;
    if(arr[i][j]=='#')
        cnt++;
     if(arr[i+1][j]=='#')
        cnt++;
    if(arr[i][j+1]=='#')
        cnt++;
    if(arr[i+1][j+1]=='#')
        cnt++;
    if(cnt!=2)
    {
        cout<<"YES\n";
        return 0;
    }
}
cout<<"NO\n";
return 0;
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
