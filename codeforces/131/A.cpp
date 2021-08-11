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
string s;
cin>>s;
bool check=true;
if(islower(*s.begin()))
    {for(int i=1;i<len(s);i++)
        if(islower(s[i]))
        {
            check=false;
            break;
        }
    }else
    for(int i=1;i<len(s);i++)
        if(islower(s[i]))
        {
            check=false;
            break;
        }

if(check)
 loop(len(s))
  if(islower(s[i]))
     s[i]-=32;
   else
    s[i]+=32;
cout<<s<<endl;

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
