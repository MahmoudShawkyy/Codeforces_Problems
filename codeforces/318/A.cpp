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

void solve(){
    ll n,k,x;
    cin>>n>>k;
    if(n%2==0)
        x=n/2;
    else
         x=n/2+1;
    if(k<=x)
        cout<<k*2-1<<endl;
    else
        cout<<(k-x)*2<<endl;
}


int main()
{
 cin.tie(0);
 cin.sync_with_stdio(0);
/*int t;
cin>>t;
while(t--)*/
  solve();
return 0;
}