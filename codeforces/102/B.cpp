#include <bits/stdc++.h>
#include <queue>
using namespace std;
typedef vector<int> vi;
typedef long long ll;
typedef pair<int ,int> PII;
#define pb push_back
#define len(s) (int)s.length()
#define sz(v)  (int)v.size()
#define all(v)  v.begin(),v.end()
#define array(arr)  arr,arr+n
#define endl '\n'
#define rep(k,n,x) for(int i=k;i<n;i+=x)
#define loop(n) for(int i=0;i<n;i++)
#define loop2(m) for(int j=0;j<m;j++)
void solve()
{
  string s;
  cin>>s;
  int n=0,cnt=1,temp=0;
  if(len(s)==1)
    cout<<0<<endl;
  else{
  loop(len(s))
   n+=s[i]-'0';
  while(n>9)
      {
          while(n)
           {
               temp+=n%10;
               n/=10;
           }
           n=temp;
           temp=0;
           cnt++;
      }
      cout<<cnt<<endl;
  }
}
int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
    int t=1;
    //cin>>t;
    while(t--)
        solve();

    return 0;
}
