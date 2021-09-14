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
    int n,cnt;
    cin>>n;
    int arr[n];
    loop(n)
    cin>>arr[i];
    int sum[n];
    fill_n(sum,n,1);
    loop(n)
        for(int j=i; j<n-1; j++)
        if(arr[j]>=arr[j+1])
            sum[i]++;
        else
            break;
    for(int i=n-1; i>=0; i--)
        for(int j=i; j>0; j--)
            if(arr[j]>=arr[j-1])
                sum[i]++;
            else
                break;
    cout<<*max_element(sum,sum+n)<<endl;
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
