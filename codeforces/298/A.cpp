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
void solve()
{
    int n,s=0,t=0;
    cin>>n;
    string str;
    cin>>str;
    loop(n)
    if(str[i]=='R')
    {
        s=i+1;
        break;
    }
    else if(str[i]=='L')
    {
        t=i;
        break;
    }
    else
        continue;
    if(s)
        for(int i=n-1; i>=0; i--)
            if(str[i]=='R')
            {
                t=i+2;
                break;
            }
            else if(str[i]=='L')
            {
                for(int j=i-1; j>=0; j--)
                    if(str[j]=='R')
                    {
                        t=j+1;
                        break;
                    }
                break;
            }
            else
                continue;
    else
        for(int i=n-1; i>=0; i--)
            if(str[i]=='L')
            {
                s=i+1;
                break;
            }
    cout<<s<<" "<<t<<endl;
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
