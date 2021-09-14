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
int n,a;
cin>>n>>a;
int arr[n];
loop(n)
cin>>arr[i];
int j=1,ans=0;
a--;
if(arr[a])
    ans++;
while(a+j<n&&a-j>=0)
{
    if(arr[a+j]&&arr[a-j])
        ans+=2;
    j++;
}
if(a-j<0)
rep(a+j,n,1)
{if(arr[i])
    ans++;}
else
    for(int i=a-j;i>=0;i--)
    if(arr[i])
    ans++;

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
