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
void solve()
{
    int n;
    cin>>n;
    int arr[n];
    vi v,freq(1e6+1);
    ll sum=0;
    loop(n)
    {cin>>arr[i];
     freq[arr[i]]++;
     sum+=arr[i];}

     loop(n)
     {
         sum-=arr[i];
         freq[arr[i]]--;
         if(sum%2==0&&sum/2<=1e6&&freq[sum/2])
            v.PB(i);
          sum+=arr[i];
         freq[arr[i]]++;
     }
     cout<<v.size()<<endl;
     loop(v.size())
     cout<<v[i]+1<<" ";
     cout<<endl;
}
int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
    int t=1;//cin>>t;
    while(t--)
        solve();

}
