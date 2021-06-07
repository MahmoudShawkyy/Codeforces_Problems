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
    int a,b;
    cin>>a>>b;
    bool check1=true,check2=true,flag=true;
    for(int j=a+1;j<b;j++)
    {


      for(int i=2;i<=sqrt(j);i++)
        if(j%i==0)
        {
            flag=false;
            break;
        }
        if(flag)
        {
            check1=false;
            break;

        }
       flag=true;

    }
     for(int i=2;i<=sqrt(b);i++)
    if(b%i==0)
    {
        check2=false;
        break;
    }
    if(check1&&check2)
        cout<<"YES\n";
     else
        cout<<"NO\n";
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
