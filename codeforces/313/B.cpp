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
string s;
cin>>s;
int arr[len(s)]={0},presum[len(s)]={0};
loop(len(s)-1)
if(s[i]==s[i+1])
    arr[i+1]++;
rep(1,len(s),i++)
presum[i]=presum[i-1]+arr[i];
int m,l,r;
cin>>m;
loop(m)
{
    cin>>l>>r;
    cout<<presum[--r]-presum[--l]<<endl;
}
}
int main()
{
    /*cin.tie(0);
    cin.sync_with_stdio(0);
    int t=1;//cin>>t;*/
    //while(t--)
        solve();
    return 0;
}
