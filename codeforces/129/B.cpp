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
        int n,m;
        cin>>n>>m;
        vector<set<int>>tie(n+1);
        vi v;
        loop(m)
        {
            int a,b;
            cin>>a>>b;
            tie[a].insert(b);
            tie[b].insert(a);
        }
        int ans=0;
        while(true)
        {

            for(int i=1;i<=n;i++)
                if(sz(tie[i])==1)
                    v.PB(i);
            loop(sz(v))
            {
                auto it=tie[v[i]].begin();
                tie[v[i]].clear();
                tie[*it].erase(v[i]);}

                if(sz(v))
                    ans++;
                else
                    break;
                    v.clear();
        }
        cout<<ans<<endl;
    }
    return 0;
}
