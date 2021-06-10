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
   ll n,sum=0;
   int i=0;
   cin>>n;
   sum=(n*(n+1))/2;
   while(1)
   {
       if(pow(2,i)<=n)
        sum-=pow(2,i)*2;
       else
        break;
     i++;
    }
    cout<<sum<<endl;

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