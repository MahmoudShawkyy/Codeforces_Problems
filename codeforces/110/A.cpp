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
    ll n,sum=0;
    int m;
    cin>>n;
   bool check=true;
   while(n){
    m=n%10;
    n/=10;
    if(m==7||m==4)
      sum++;
     else
       continue;
   }
   if(sum==7||sum==4)
    cout<<"YES\n";
   else
    cout<<"NO\n";
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
