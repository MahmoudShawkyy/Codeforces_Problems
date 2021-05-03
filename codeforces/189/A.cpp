#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef long long ll;
#define PB push_back
#define len(s) (int)s.length()
#define sz(v)  (int)v.size()
#define all(a)  a.begin(),a.end()
#define array(arr)  arr,arr+n
#define endl '\n'
#define loop(n) for(int i = 0; i < (n); i++)
int main()
{
 cin.tie(0);
 cin.sync_with_stdio(0);
int n,a,b,c;
cin>>n>>a>>b>>c;
int res=0;
for(int i=0;i<=n;i++)
  for(int j=0;j<=n;j++){
   int length=i*a+j*b;
    int rem=n-length;
     if(rem<0||rem%c!=0)
        continue;
     int k=rem/c;
     res=max(res,i+j+k);

  }
  cout<<res<<endl;
    return 0;
}
