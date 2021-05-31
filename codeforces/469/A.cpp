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

void solve(){
 int n,p,q,x;
 cin>>n>>p;
 bool check[n+1]={false},flag=true;
 loop(p)
  {
     cin>>x;
      check[x]=true;
  }
  cin>>q;
  loop(q)
  {
     cin>>x;
     check[x]=true;
  }
  for(int i=1;i<=n;i++)
      if(!check[i])
      {
          flag=false;
          break;
      }


 if(flag)
  cout<<"I become the guy.\n";
  else
  cout<<"Oh, my keyboard!\n";
}
int main()
{
 cin.tie(0);
 cin.sync_with_stdio(0);
/*int t;
cin>>t;
while(t--)*/

  solve();

}
