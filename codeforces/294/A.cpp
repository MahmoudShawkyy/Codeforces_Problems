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

void solve(){
    int n,m;
    cin>>n;
    int arr[n];
    loop(n)
    cin>>arr[i];
    cin>>m;
    while(m--)
    {
        int x,y;
        cin>>x>>y;
        x--;
        if(x)
        arr[x-1]+=y-1;
        if(x<n-1)
         arr[x+1]+=arr[x]-y;
        arr[x]=0;
    }
    loop(n)
    cout<<arr[i]<<endl;

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
