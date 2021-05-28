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
   int n,k=65;
   cin>>n;
   string s;
   cin>>s;
   bool flag=false;
   while(k<=90){
        flag=false;
     loop2(n)
     if(s[j]==k||s[j]==k+32)
        flag=true;
        if(!flag)
            break;
        k++;
   }

 if(flag)
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

}
