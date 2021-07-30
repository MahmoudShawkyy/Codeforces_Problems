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
//int freq[20,0005]={0};
void solve()
{
    int n,maxi;
    cin>>n;
    int arr[n];
    vi v;
    loop(n)
    cin>>arr[i];
    maxi=arr[n-1];
    v.PB(0);
    for(int i=n-2; i>=0; i--)

         if(arr[i]<=maxi)
            v.push_back(maxi-arr[i]+1);
         else if(arr[i]>maxi)
        {
            maxi=arr[i];
            v.PB(0);
        }
 reverse(all(v));
 loop(n)
 cout<<v[i]<<" ";
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
