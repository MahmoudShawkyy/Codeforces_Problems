#include <bits/stdc++.h>
#include <queue>
using namespace std;
typedef vector<int> vi;
typedef long long ll;
typedef pair<int,int> PII;
#define pb push_back
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
    // cin>>t;
    while(t--)
    {
        int n,m;
        char c;
        cin>>n>>m>>c;
        char arr[n+2][m+2];
      memset(arr,'.',sizeof(arr));
        rep(1,n+1,1)
        for(int j=1; j<m+1; j++)
            cin>>arr[i][j];
        set<char>st;
        rep(1,n+1,1)
        for(int j=1; j<m+1; j++)
            if(arr[i][j]==c)
            {
                st.insert(arr[i+1][j]);
                st.insert(arr[i][j+1]);
                st.insert(arr[i-1][j]);
                st.insert(arr[i][j-1]);
            }
        int r=0;
        for(auto it=st.begin(); it!=st.end(); it++)
            if(*it=='.'||*it==c)
                r++;

        cout<<st.size()-r<<endl;
    }
    return 0;
}
