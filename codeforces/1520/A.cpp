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
 int n,cnt=0;
 cin>>n;
 string s;
 cin>>s ;
vector<char>v;
v.PB(s[0]);
loop(len(s)-1)
if(s[i]!=s[i+1])
    v.PB(s[i+1]);
sort(all(v));
loop(v.size()-1)
if(v[i]==v[i+1])
  cnt++;
if(!cnt)
    cout<<"YES\n";
else
   cout<<"NO\n";

}



int main()
{
 cin.tie(0);
 cin.sync_with_stdio(0);
int t;
cin>>t;
while(t--)
  solve();
}
