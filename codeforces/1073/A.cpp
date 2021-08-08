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
    string s;
    cin>>n>>s;
    loop(len(s)-1)
    if(s[i]!=s[i+1])
    {
        cout<<"YES\n"<<s[i]<<s[i+1]<<endl;
        return 0;
    }
    cout<<"NO\n";
    return 0;
}
int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
    solve();
    return 0;
}
