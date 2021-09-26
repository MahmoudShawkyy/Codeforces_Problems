#include <bits/stdc++.h>
#include <queue>
using namespace std;
typedef vector<int> vi;
typedef long long ll;
typedef pair<int,int> PII;
#define PB push_back
#define len(s) (int)s.length()
#define sz(v)  (int)v.size()
#define all(v)  v.begin(),v.end()
#define array(arr)  arr,arr+n
#define endl '\n'
#define rep(k,n,x) for(int i=k;i<n;i+=x)
#define loop(n) for(int i=0;i<n;i++)
#define loop2(m) for(int j=0;j<m;j++)
int arr[100005];
int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
    int t=1;
    //cin>>t;
    while(t--)
    {
    int n,m,k;
     cin>>n;
     loop(n)
     cin>>arr[i];
     sort(arr,arr+n);
     double r1=arr[n-1];
     cin>>m;
     loop(m)
     cin>>arr[i];
     sort(arr,arr+m);
     double p1=arr[m-1];
     cin>>k;
     loop(k)
     cin>>arr[i];
     sort(arr,arr+k);
     double p2=arr[0];
     double a,b;
     cin>>a>>b;
   long double ans = sqrt((double)(b*p1*r1*r1)/(a*p2+b*p1));
     cout<<setprecision(9)<<fixed<<ans<<endl;

    }
    return 0;
}
