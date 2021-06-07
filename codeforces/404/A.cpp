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

int solve()
{
    int n;
    cin>>n;
    char arr[n][n];
    bool check=true,flag[n][n]= {true};
    loop(n)
    loop2(n)
    cin>>arr[i][j];
    char dig=arr[0][0],ch=arr[0][1];
    if(dig==ch)
        cout<<"NO\n";
    else
    {
    loop(n)
    loop2(n)
    if(i==j||j==n-1-i)
    {
        if(arr[i][j]!=dig)
        {
            cout<<"NO\n";
            return 0;
        }
    }
    else if(arr[i][j]!=ch)
{
    cout<<"NO\n";
    return 0;
}

cout<<"YES\n";
    }
}
int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
    /*int t;
    cin>>t;
    while(t--)*/

    solve();

}
