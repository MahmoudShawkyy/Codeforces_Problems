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

int solve(){
    int n   ;
    cin>>n;
    double res=double(n)/100;
    for(double i=1;i<=100;i++)
        for(double j=1;j<=100;j++){
         if(i/j==res){
          cout<<j<<endl;
          return 0;} }

    return 0;
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
