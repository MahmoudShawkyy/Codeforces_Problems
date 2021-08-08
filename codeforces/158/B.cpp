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
int freq[5]={0};
void solve()
{
int n,m;
cin>>n;
loop(n)
{
    cin>>m;
    freq[m]++;
}
int one = max(freq[1]-freq[3],0);
int ans=freq[3]+freq[4]+(freq[2]*2+one+3)/4;
cout<<ans<<endl;
}
int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
    solve();
    return 0;
}
