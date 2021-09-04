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
map<string,int>mp;
string s;
int n;
cin>>n;
loop(n)
{
    cin>>s;
    if(!mp.count(s))
    {
        cout<<"OK\n";
        mp.insert({s,0});
    }else
    {

        cout<<s<<++mp[s]<<endl;
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
