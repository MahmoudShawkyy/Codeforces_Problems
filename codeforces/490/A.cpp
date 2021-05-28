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
   int n;
   cin>>n;
   int arr[n];
   loop(n)
   cin>>arr[i];
   vi v1,v2,v3;
   loop(n)
   {
       if(arr[i]==1)
         v1.PB(i+1);
        else if(arr[i]==2)
          v2.PB(i+1);
        else
           v3.PB(i+1);
   }
   int mini=min(v1.size(),v2.size());
   int sizee=v3.size();
   int teams=min(mini,sizee);
   cout<<teams<<endl;
   loop(teams)
   {
       cout<<v1[i]<<" "<<v2[i]<<" "<<v3[i]<<endl;
   }
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
