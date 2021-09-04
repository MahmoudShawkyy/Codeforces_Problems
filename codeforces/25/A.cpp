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
    int n,cnt=0;
    cin>>n;
    bool even=false;
    int arr[n];
    loop(n)
    {
        cin>>arr[i];
        if(arr[i]%2==0)
            cnt++;
    }
    cnt==1?even=true:even=false;
    if(even)
        loop(n)
    {
        if(arr[i]%2==0)
        {
            cout<<++i<<endl;
            break;
        }
    }
    else
        loop(n)
    {
        if(arr[i]%2!=0)
        {
            cout<<++i<<endl;
            break;
        }
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
