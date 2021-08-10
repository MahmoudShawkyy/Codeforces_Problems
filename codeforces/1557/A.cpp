#include <bits/stdc++.h>
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
int solve()
{
   int n;
    double ans=0;
    ll sum=0;
    cin>>n;
    if(n==1)
    {
        int x;
        cin>>x;
        cout<<x<<endl;
        return 0;
    }
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n,greater<int>());
    for(int i=1;i<n;i++)
    {
       sum+=arr[i];
    }
   ans=arr[0]+(double)sum/(n-1);
   printf("%lf\n",ans);
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
