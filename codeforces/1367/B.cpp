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
void solve()
{
    int n,m;
    cin>>n;
    int even=0,odd=0;
    loop(n)
    {
        cin >> m;
        if (m%2!=i%2)
            if (i%2==0)
                even++;
            else
                odd++;
    }

    cout<<(even==odd?even:-1)<<endl;
}
    int main()
    {
        cin.tie(0);
        cin.sync_with_stdio(0);
        int t=1;
        cin>>t;
        while(t--)
            solve();
        return 0;
    }
