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
   string str;
   cin>>str;
   vi v;
    loop(len(str))
    {
       if(str[i]!='+')
       {
         str[i]-=48;
         v.PB(str[i]);
       }

    }
    sort(all(v));
   loop(v.size()-1)
    cout<<v[i]<<'+';
    cout<<v[v.size()-1]<<endl;
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
