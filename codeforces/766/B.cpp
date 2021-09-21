#include <bits/stdc++.h>
#include <queue>
using namespace std;
typedef vector<int> vi;
typedef long long ll;
typedef pair<int,int> PII;
#define PB push_back
#define len(s) (int)s.length()
#define sz(v)  (int)v.size()
#define all(v)  v.begin(),v.end()
#define array(arr)  arr,arr+n
#define endl '\n'
#define rep(k,n,x) for(int i=k;i<n;i+=x)
#define loop(n) for(int i=0;i<n;i++)
#define loop2(m) for(int j=0;j<m;j++)

int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
    int t=1;
    // cin>>t;
    while(t--)
    {
     int n;
     cin>>n;
     ll arr[n];
     loop(n)
     cin>>arr[i];
     sort(array(arr));
     bool flag =false;
     loop(n-2)
     if(arr[i+1]+arr[i]>arr[i+2])
     {
         flag=true;
         break;
     }
      cout<<(flag?"YES\n":"NO\n");
    }
    return 0;
}
