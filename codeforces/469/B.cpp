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
int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
    int t=1;
    //cin>>t;
    while(t--)
    {
        bool x[1005],z[10005];
        int q,p,l,r;
        cin>>q>>p>>l>>r;
        int a,b;
        loop(q)
        {
            cin>>a>>b;
            rep(a,b+1,1)
            z[i]=true;
        }
        loop(p)
        {
            cin>>a>>b;
            rep(a,b+1,1)
            x[i]=true;
        }
        int ans=0;
        rep(l,r+1,1)
        for(int j=i; j<=1005; j++)
            if(z[j]&&x[j-i])
            {
                ans++;
                break;
            }
        cout<<ans<<endl;
    }
    return 0;
}
