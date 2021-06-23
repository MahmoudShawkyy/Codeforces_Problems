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
{  int n;
        cin>>n;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if((i==0&&j==(n-1))||(i==(n-1)&&j==0))
                    cout<<1<<" ";
                else{
                    if(i==j||j==(i+1))
                        cout<<1<<" ";
                    else 
                        cout<<0<<" ";
                }
            }
            cout<<endl;
        }
}

int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
    int t;
    cin>>t;
    while(t--)
     solve();

}
