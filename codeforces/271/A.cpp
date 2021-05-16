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

int solve(){
int n,m;
cin>>n;
vi v;
set <int> s;
bool check=true;
while(1){
    n++;
m=n;
while(m){
    v.PB(m%10);
    s.insert(m%10);
    m/=10;
}
if(s.size()==v.size())
    break;
 v.clear();
s.clear();
}
cout<<n<<endl;

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
