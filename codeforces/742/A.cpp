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
    int n;
    cin>>n;

     if(!n)
        cout<<1<<endl;

   else if(n%4==0)cout<<"6"<<endl;
        else if(n%4==1)cout<<"8"<<endl;
        else if(n%4==2)cout<<"4"<<endl;
        else if(n%4==3)cout<<"2"<<endl;
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
