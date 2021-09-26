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
        set<int>st;
        int n,m;
        cin>>n;
        loop(n)
        {
            cin>>m;
            st.insert(m);
        }
        auto start=st.begin(),endd=st.end();
        start++;
        endd--;
        if((st.size()==3&&*endd-*start==*start-*st.begin())||st.size()==2)
            cout<<"YES\n";
        else if(*endd==*st.begin())
            cout<<"YES\n";
        else
            cout<<"NO\n";



    }
    return 0;
}
