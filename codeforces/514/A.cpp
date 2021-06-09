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
   ll x,num=0,digit,temp,power=0;
   cin>>x;

   while(x){
    if(x==9)
     digit=9;
   else {
    temp=9-x%10;
    digit=min(temp,x%10);}
     num+=digit*pow(10,power);
    x/=10;
    power++;
   }

   cout<<num<<endl;}

int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
    /*int t;
    cin>>t;
    while(t--)*/

    solve();

}
