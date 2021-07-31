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
//int freq[20,0005]={0};
void solve()
{
    int n,cnt=1;
    cin>>n;
    vi v;
    int arr[n];
    loop(n)
    cin>>arr[i];
    if(n==1)
        cout<<1<<endl;
    else {
    for(int i=1; i<n; i++)
    {
        if(i==n-1&&arr[i]>arr[i-1])
        {cnt++;
         v.PB(cnt);
         break;}

        if(arr[i]>arr[i-1])
            cnt++;
        else
        {
            v.PB(cnt);
            cnt=1;
        }
    }
    sort(all(v),greater<int>());
    cout<<*v.begin()<<endl;
 }
}
int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
    int t=1;//cin>>t;
    while(t--)
        solve();

}
