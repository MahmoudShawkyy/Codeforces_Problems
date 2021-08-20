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
int n,cnt=0,ans=0;
bool check=false;
cin>>n;
int arr[n];
loop(n)
cin>>arr[i];
loop(n*2)
{if(arr[i%n])
    cnt++;
else
    cnt=0;
 ans=max(cnt,ans);
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
