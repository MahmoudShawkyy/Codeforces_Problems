#include <bits/stdc++.h>
#include <queue>
using namespace std;
typedef vector<int> vi;
typedef long long ll;
#define pb push_back
#define len(s) (int)s.length()
#define sz(v)  (int)v.size()
#define all(v)  v.begin(),v.end()
#define array(arr)  arr,arr+n
#define endl '\n'
#define rep(k,n,x) for(int i=k;i<n;i+=x)
#define loop(n) for(int i=0;i<n;i++)
#define loop2(m) for(int j=0;j<m;j++)
int solve()
{
string s;
cin>>s;
int n=len(s)-1;
if(*s.begin()=='0')
    cout<<0<<endl;
else if(n%2==0)
 {
     n/=2;
rep(1,len(s),1)
 if(s[i]=='1')
 {
     cout<<++n<<endl;
     return 0;
 }
cout<<n<<endl;
 }else
 cout<<n/2+1<<endl;

}
int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
    int t=1;
    //cin>>t;
    while(t--)
        solve();

    return 0;
}
