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
    cin>>n;
    string s;
    cin>>s;
     if(n==1)
    {
        cout<<
        "Yes\n";
        return 0;
    }
    sort(all(s));
    loop(n-1)
    if(s[i]==s[i+1])
    {
        cout<<"Yes\n";
        return 0;
    }
    cout<<"No\n";
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
