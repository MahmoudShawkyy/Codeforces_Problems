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
    int n,a=0,b=0;
    cin>>n;
    string s;
    cin>>s;
    for(int i=-1;i<n-1;i++)
    {for(int j=i+1;j<n;j++)
    {
        if(s[j]=='a')
            a++;
        else
         b++;
        if(a==b)
        {
            cout<<i+2<<" "<<j+1<<endl;
            return 0;
        }
    }
    a=0;
    b=0;
    }

 cout<<-1<<" "<<-1<<endl;
}
int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
    int t=1;cin>>t;
    while(t--)
        solve();

    return 0;
}
