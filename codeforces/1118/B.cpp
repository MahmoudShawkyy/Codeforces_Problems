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
int n,pe=0,po=0,se=0,so=0,ans=0;;
cin>>n;
int arr[n];
loop(n)
{
    cin>>arr[i];
    if(i%2==0)
    se+=arr[i];
    else
    so+=arr[i];
}
loop(n)
{
    if(i%2==0)
    se-=arr[i];
    else
    so-=arr[i];
    if(pe+so==po+se)
     ans++;
if(i%2==0)
    pe+=arr[i];
    else
    po+=arr[i];
}
cout<<ans<<endl;
}
int main()
{
    /*cin.tie(0);
    cin.sync_with_stdio(0);
    int t=1;//cin>>t;*/
    //while(t--)
        solve();
    return 0;
}
