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
   int n,mini,maxi;
   cin>>n;
   int arr[n];
   loop(n)
   cin>>arr[i];
   mini=abs(arr[0]-arr[1]);
   maxi=abs(arr[0]-arr[n-1]);
   cout<<mini<<" "<<maxi<<endl;
   if(n>2)
   for(int i=1;i<n-1;i++)
   {
       mini=min(abs(arr[i]-arr[i+1]),abs(arr[i]-arr[i-1]));
       maxi=max(abs(arr[i]-arr[0]),abs(arr[i]-arr[n-1]));
       cout<<mini<<" "<<maxi<<endl;
   }
   mini=abs(arr[n-1]-arr[n-2]);
   maxi=abs(arr[n-1]-arr[0]);
   cout<<mini<<" "<<maxi<<endl;




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
