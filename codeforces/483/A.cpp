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

void solve()
{
     ll a,b,x,y,z;
    cin>>a>>b;
    if(a%2)
     x=a+1;
    else
     x=a;
    y=x+1,z=y+1;
    if(z>b)
      cout<<-1<<endl;
    else
      cout<<x<<' '<<y<<' '<<z<<endl;
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
