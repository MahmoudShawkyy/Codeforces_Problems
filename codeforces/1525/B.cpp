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
   loop(n)
   cin>>arr[i];
   if(is_sorted(arr,arr+n))
     cout<<0<<endl;
   else if(*min_element(arr,arr+n)==arr[0]||*max_element(arr,arr+n)==arr[n-1])
    cout<<1<<endl;
    else if(*max_element(arr,arr+n)==arr[0]&&*min_element(arr,arr+n)==arr[n-1])
    cout<<3<<endl;
    else
        cout<<2<<endl;
}
    int main()
    {
        cin.tie(0);
        cin.sync_with_stdio(0);
        int t=1;
        cin>>t;
        while(t--)
            solve();
        return 0;
    }
