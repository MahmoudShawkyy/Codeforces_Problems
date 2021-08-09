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
int freq[5]= {0};
void solve()
{
    int n,cnt=1,ans=1;
    cin>>n;
    int arr[n];
    loop(n)
    cin>>arr[i];
    for(int i=1; i<n; i++)
    {
        if(arr[i]>=arr[i-1])
            cnt++;
        else
            cnt=1;
        ans=max(ans,cnt);
    }
    cout<<ans<<endl;

}
int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
    solve();
    return 0;
}
