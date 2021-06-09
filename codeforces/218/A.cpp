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
     int n,k;
	cin>>n>>k;
	int a[2*n+1];
	for(int i=0;i<2*n+1;i++)cin>>a[i];
	for(int i=0;i<2*n+1;i++){
		if(i%2==1&&k&&a[i]>a[i-1]+1&&a[i]>a[i+1]+1){
			k--;
			cout<<a[i]-1<<" ";
		}
		else{
			cout<<a[i]<<" ";
		}
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
